#ifndef ELICEUTILS_H
#define ELICEUTILS_H

#include <string>

class EliceUtils {
private:
    std::string _execution_token;
    std::string _executor_ip;
    std::string _executor_com_port;

    std::string _otp_key;

    void _send(std::string const& url, std::string const& type_param, std::string const& data_param);
    std::string _handle_image(std::string const& filepath);
    std::string _handle_file(std::string const& filepath);

public:
    EliceUtils();

    void send(std::string const& msg_type, std::string const& msg_data);
    void send_image(std::string const& filepath);
    void send_file(std::string const& filepath);

    void secure_init();
    void secure_send(std::string const& msg_type, std::string const& msg_data);
    void secure_send_image(std::string const& filepath);
    void secure_send_file(std::string const& filepath);
    void secure_send_grader(std::string const& msg);
    void secure_send_score(int const& score);
};

#endif
