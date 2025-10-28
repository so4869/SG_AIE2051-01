### Greatest Common Divisor & Least Common Multiplier

1)Implement the functions **int GetGCD(int, int)** and 2)**int GetLCM(int, int, int)** to compute the Greatest Common Divisor (GCD) and the Least Common Multiple (LCM) of two integers a and b entered by the user.


**[Method to find the GCD]**  
1. Define the larger of the two variables a and b as max, and the smaller as min.
2. Calculate the remainder of dividing max by min.
3. If the remainder is 0, then GCD = min.
4. If the remainder is not 0, set max = min, min = remainder, and repeat the above process until the remainder becomes 0.


**[Method to find the LCM]**  
LCM = (a × b) ÷ GCD

<br>
<span style="color: #f00">※ Do not modify the main function. Points will be deducted if modified.</span>


&lt;example 1&gt;  
input:
```
40 15
```

output:
```
5 120
```


&lt;example 2&gt;  
input:
```
28 84
```

output:
```
28 84
```