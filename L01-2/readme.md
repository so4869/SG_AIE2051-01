# Hello world in C++

The goal is to print “hello world” with C++ syntax. Follow the instructions below.

**1. Declare main() function.**  
In C++, the main function should be declared with integer return type. Type the following text in the practice window.
```c++
int main(){
    return 0;
}
```

**2. Use a standard output function “cout”.**
Like C, there is a built-in function that prints values on the command window. 
That is function *std::cout*. 
To use this, you first need to **INCLUDE** the headerfile of them that include the definition of function std::cout. 
Please type the following code on the top of your code.
```c++
#include <iostream>
```

Then, let us go back to the main body. Type
```c++
std::cout << "Hello world in C++" << std::endl;
```
before the return function. If you run the code, your program will print “Hello world in C++”.

**3. Drop “std::”**  
In C++, there is a new concept called namespace. 
You can think it as a set of functions and variables. 
If you want to use some function or variable in namespace A, you should type “A::” before the function in the code.

*cout* is a function defined in the standard namespace called std. 
That is why we attach *std::*. 
To drop this, we can use the following code.
```c++
#include <iostream>
using namespace std;
```
It means we would like to use functions of the namespace without the attachment.