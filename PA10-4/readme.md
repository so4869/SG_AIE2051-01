# Converting string to numbers

Input string has two parts: datatype and value part. They are separated by a colon.

There could be two datatypes: int and float. int and float stand for integer number and floating number, respectively.

Please convert the value string to numeric values in given datatype. Use the functions `atoi()` and `atof()` that converts a C-string to numeric values.
(atoi: https://cplusplus.com/reference/cstdlib/atoi/ )
(atof: https://cplusplus.com/reference/cstdlib/atof/ )

C-string refers to the C-style representation of a string class. (a pointer to a char array)
You can convert a C++ string to a C-string using the function `c_str()`.

**Input #1**
```
float:13.23
```

**Output #1**
```
13.23
```

**Input #2**
```
int:100.1
```

**Output #2**
```
100
```

**Input #3**
```
int:92
```

**Output #3**
```
92
```