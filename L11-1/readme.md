# Inserting in Increasing Order

In this task, `n` integer numbers are given. When you add each element in the list, you should put it in the right place so that the sequence keeps the increasing order.

Implement template function `insertIncreasingOrder` working correctly.

Please donot use `sort` function because it takes a large computational cost. Use `insert` function.  
Hint: find the leftmost element that is larger than a given item.

**Input**
```
5
1 3 2 4 5
```

**Output**
```
1 2 3 4 5
Increasing.
```

**WARNING:** If you use iterator in template functions, please put typename before iterator declaration ( https://stackoverflow.com/questions/22874535/dependent-scope-need-typename-in-front )