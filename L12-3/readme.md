# Divide x with y
To prevent the case of division with very small number, we will use syntax `try` and `catch` with class `std::invalid_argument`.  
Please throw a `invalid_argument` object when the aboslute of divisor `y` is smaller than `epsilon`.  
If it is smaller than epsilon, please print out the following statement on the screen and terminate the program by returing -1 in function main.

```
The divisor is too small to divide. 
```