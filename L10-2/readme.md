# Three words

In this task, your job is to concatenate three input strings in alphabetical order.

Not like C, where we use `strcmp` to compare two stirngs, we will use comparison operators of string class such as ==, !=, <, and <=, thanks to encapsulation of string class.

The concatenation operator + attaches the right string at the end of the left stirng.
```c++
string str1 = "ABC";
string str2 = "BCD";
string str = str1 + str2; // "ABCBCD"
```

**_Input example_**
```
SOGANG UNIVERSITY GONZAGA
```

**_Output example_**
```
GONZAGASOGANGUNIVERSITY
```
