# Function Template

A function template is useful to implement functions that have the same behavior but with different datatypes.  
The function template takes datatypes as parameters and enables the declaration of functions with different datatypes.  
This is a kind of generic programming in C++.  
In this task, you will implement a function template for add functions.  

To declare a function template, you first need to type “template ” before the function declaration:
```c++
template <typename T>
T add(T a, T b){
 ... // function body 
}
```

Note that symbol T would be replaced with a given datatype argument.

In order to call a function of template, the datatype should be passed to the template so that datatypes in the template get fixed.
The datatype parameter is attached before the argument:
```c++
add <int> (...); // create a int-base add function
```

Please implement “add” function template and use the template to call function add with datatype int and double.
