# Template Specialization

A template is useful when we want to create the same control flow with a different datatype.
However, sometimes we have to allow a different control flow for each datatype due to their characteristics.

In this task, we will define a multiply function for class datatype Vec2 over the function template.
To override the template body, we will define the different function body after the template definition:
```c++
template <typename T>
T multiply(...){
... // function body
}

template <>
Vec2 multiply(Vec2 a, Vec2 b){
... // function body
}
```

About multiplication of class Vec2, the function returns a vector of each element is multiplication of elements of the same position (called element-wise multiplication).

Please implement specialization to handle special datatype Vec2.