# Read and print string

In this task, you will implement a program that reads a string from standard input (string) and output a character and a number of each element sequentially.

To get a string from the screen, use `cin` with double-right arrows.
```c++
string str;
cin >> str;
```

Then, we iterate the loop over a string to print a character and a ASCII value per each element.
To this end, we enumerate index `i` from 0 to the length of string `str`.  
String class supports method `str.length()` that returns length of string `str`.

If the input is “SOGANG”, your output should be like the below.
```
S:83 O:79 G:71 A:65 N:78 G:71 
```