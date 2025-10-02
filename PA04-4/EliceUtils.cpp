#include <cstdlib>
#include <iostream>
#include <sstream>
#include <string>

#include "EliceUtils.h"

#define POPEN_BUFF_SIZE 1024

std::string _getenv_string(std::string const& env_var) {
  char const* v = std::getenv(env_var.c_str());
  return (v == NULL) ? std::string("") : std::string(v);
}

int _run_command(std::string cmd, std::string * output) {
  char buff[POPEN_BUFF_SIZE];

  cmd.append(" 2>&1");
  FILE * pstream = popen(cmd.c_str(), "r");
  if (pstream) {
    std::ostringstream output_stream;
    while (!std::feof(pstream)) {
      if (std::fgets(buff, POPEN_BUFF_SIZE, pstream) != NULL) {
        output_stream << buff;
      }
    }

    if (output != NULL) {
      output->assign(output_stream.str());
    }

    return pclose(pstream);
  }

  return -1;
}

void EliceUtils::_send(std::string const& url, std::string const& type_param, std::string const& data_param) {
  std::ostringstream cmd;

  cmd << "curl -s ";
  cmd << "--data-urlencode '" << type_param << "' ";
  cmd << "--data-urlencode '" << data_param << "' ";
  cmd << url;

  if (_run_command(cmd.str(), NULL) != 0) {
    std::cerr << "Failed to send message to elice." << std::endl;
    std::exit (EXIT_FAILURE);
  }
}

std::string EliceUtils::_handle_image(std::string const& filepath) {
  std::string mimetype;
  if (_run_command("file -00 --mime-type -b " + filepath, &mimetype) != 0) {
    std::cerr << "Failed to guess mimetype." << std::endl;
    std::exit (EXIT_FAILURE);
  }
  // TODO : temporal bug fix for /usr/bin/file:5.25 (ubuntu 16.04)
  while (mimetype.find("\n") != std::string::npos) {
    mimetype.replace(mimetype.find("\n"), 1, "");
  }
  if (mimetype.find("image/") != 0) {
    std::cerr << "Invalid mimetype." << std::endl;
    std::exit (EXIT_FAILURE);
  }
  std::string base64content;
  if (_run_command("base64 -w 0 " + filepath, &base64content) != 0) {
    std::cerr << "Failed to convert as base64." << std::endl;
    std::exit (EXIT_FAILURE);
  }
  return "data:" + mimetype + ";base64," + base64content;
}

std::string EliceUtils::_handle_file(std::string const& filepath) {
  std::string filename;
  if (_run_command("basename -z " + filepath, &filename) != 0) {
    std::cerr << "Failed to get filename." << std::endl;
    std::exit (EXIT_FAILURE);
  }
  std::string mimetype;
  if (_run_command("file -00 --mime-type -b " + filepath, &mimetype) != 0) {
    std::cerr << "Failed to guess mimetype." << std::endl;
    std::exit (EXIT_FAILURE);
  }
  // TODO : temporal bug fix for /usr/bin/file:5.25 (ubuntu 16.04)
  while (mimetype.find("\n") != std::string::npos) {
    mimetype.replace(mimetype.find("\n"), 1, "");
  }
  std::string base64content;
  if (_run_command("base64 -w 0 " + filepath, &base64content) != 0) {
    std::cerr << "Failed to convert as base64." << std::endl;
    std::exit (EXIT_FAILURE);
  }
  return filename + ";data:" + mimetype + ";base64," + base64content;
}

EliceUtils::EliceUtils() {
  _execution_token = _getenv_string("EXECUTION_TOKEN");
  _executor_ip = _getenv_string("EXECUTOR_IP");
  _executor_com_port = _getenv_string("EXECUTOR_COM_PORT");

  if (_execution_token.empty() || _executor_ip.empty() || _executor_com_port.empty()) {
    std::cerr << "Invalid elice environment." << std::endl;
    std::exit (EXIT_FAILURE);
  }
}


void EliceUtils::send(std::string const& msg_type, std::string const& msg_data) {
  std::ostringstream url;

  url << "http://" << _executor_ip << ":" << _executor_com_port \
      << "/comm/send/" << _execution_token;

  _send(url.str(), "type=" + msg_type, "data=" + msg_data);
}

void EliceUtils::send_image(std::string const& filepath) {
  send("image", _handle_image(filepath));
}

void EliceUtils::send_file(std::string const& filepath) {
  send("file", _handle_file(filepath));
}


void EliceUtils::secure_init() {
  std::ostringstream url;

  url << "http://" << _executor_ip << ":" << _executor_com_port \
      << "/comm/secure/init/" << _execution_token;

  if (_run_command("curl -s " + url.str(), &_otp_key) != 0) {
    std::cerr << "Failed to initialize elice util secure channel." << std::endl;
    std::exit (EXIT_FAILURE);
  }
}

void EliceUtils::secure_send(std::string const& msg_type, std::string const& msg_data) {
  std::ostringstream url;

  url << "http://" << _executor_ip << ":" << _executor_com_port \
      << "/comm/secure/send/" << _execution_token \
      << "/" << _otp_key;

  _send(url.str(), "type=" + msg_type, "data=" + msg_data);
}

void EliceUtils::secure_send_image(std::string const& filepath) {
  secure_send("image", _handle_image(filepath));
}

void EliceUtils::secure_send_file(std::string const& filepath) {
  secure_send("file", _handle_file(filepath));
}

void EliceUtils::secure_send_grader(std::string const& msg) {
  secure_send("grader", msg);
}

void EliceUtils::secure_send_score(int const& score) {
  secure_send("score", std::to_string(score));
}
