**Switch statement**

In this task, a program gets two integers`num1` and `num2` and a arithmetic operation **op**(+,-,/, and *). 
Your task is to compute the arithmetic operation
`num1 op num2` for two numbers and print the result.

For division operation, we will adrress the zero division. If the divisor is zero, the operation is not computed and the error message is printed out like the following:
```
Error: Division by zero.
```

For other operations that are not supported, please print out the following error message.
```
Error: Invalid operation.
```

Please use the switch statement to complete this task.

<br><br>
#### Example #1
```
Enter first number: 1
Enter second number: 2
Enter an operation (+, -, *, /): +
Result: 3
```

#### Example #2
```
Enter first number: 3
Enter second number: 5
Enter an operation (+, -, *, /): *
Result: 15
```

#### Example #3
```
Enter first number: 1
Enter second number: 2
Enter an operation (+, -, *, /): %
Error: Invalid operation.
```

#### Example #4
```
Enter first number: 4
Enter second number: 0
Enter an operation (+, -, *, /): /
Error: Division by zero.
```

