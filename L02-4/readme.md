# Test Score Analyzer

You are developing a program for a teacher who wants to analyze test scores. The teacher needs a tool that can process a series of test scores with the following requirements:
1. The program should accept test scores (integers) one at a time.
2. Negative numbers are not valid test scores and should be ignored.
3. The program should stop processing scores when the user enters 0.
4. After processing all valid scores, the program should display:

- The sum of all valid (positive) scores
- The count of valid scores entered
- The average of the valid scores

Additionally, the program should provide feedback to the user when:
- A negative number is entered (and subsequently ignored)
- The number 0 is entered (signaling the end of input)

## Task
Implement this program using a loop with `continue` and `break` statements to handle the special cases (negative numbers and the stop condition).

## Example
```
Enter numbers (enter 0 to stop):
Enter a number: 85
Added 85 to the sum.
Enter a number: -10
Negative number skipped.
Enter a number: 92
Added 92 to the sum.
Enter a number: 78
Added 78 to the sum.
Enter a number: 0
Found 0. Stopping the loop.
Sum of positive numbers: 255
Count of positive numbers: 3
Average of positive numbers: 85
```

## Tips
- Use the `continue` statement to skip negative numbers.
- Use the `break` statement to exit the loop when 0 is entered.
