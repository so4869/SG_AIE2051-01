# Stack & Priority Queue

There are three classes : Array, Priority Queue, Stack

1. **Class Array (parent class)**  

The Array class is an abstract class that defines a common interface for array-based data structures. Classes that inherit from this class must implement their own versions of the **push()** and **pop()** functions to add and remove elements according to their specific functionality.

2. **Class Priority Queue (child class)**

A priority queue is a data structure where each element is associated with a priority, and elements are dequeued in order of their priority, with the highest priority elements being removed first. The array should be sorted in ascending order based on priority. In a priority queue class, the `front` variable points to the position right before the highest-priority element, while the `rear` variable points to the position of the lowest-priority element. Both variables are initialized to -1.

The following PriorityQueue member functions should be implemented in *priorityQueue.cpp*

| Function                    | Descriptions                                                                                                                                                                                                                           |
|-----------------------------|----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **PriorityQueue(int elem)** | Adds `elem` as the first element in the queue array.                                                                                                                                                                                   |
| **bool push(int elem)**     | Insert a new element elem into the array, assuming smaller values have higher priority (the array is sorted in ascending order). If the array is full and the element cannot be added, it returns `false` otherwise, it returns `true` |
| **bool pop()**              | Remove the highest priority element(the smallest element) from the array. If the array is empty, it returns `false`; otherwise, it returns `true` upon successful removal.                                                             |
| **bool isEmpty()**          | Returns true if the array is empty, otherwise returns false (A queue is empty when `front` and `rear` are equal.)                                                                                                                      |
| **void print()**            | Prints all the elements in the array. ex) 1 2 3 4 5                                                                                                                                                                                    |

3. **Class Stack (child class)**

A stack is a data structure that follows the Last In, First Out (LIFO) principle, where the last element added is the first to be removed. In a stack class, the `top` variable points to the index of the most recently inserted element and is initially set to -1.

The following Stack member functions should be implemented in *stack.cpp*

| Function                    | Descriptions                                                                                                                                                                                          |
|-----------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **PriorityQueue(int elem)** | Adds `elem` as the first element in the stack array.                                                                                                                                                  |
| **bool push(int elem)**     | Insert an element to the end of the array. The newly added element becomes the most recent one. If the array is full and the element cannot be added, it returns `false` otherwise, it returns `true` |
| **bool pop()**              | Remove the most recently added element (the last element). If the array is empty, it returns `false`; otherwise, it returns `true` upon successful removal.                                           |
| **bool isEmpty()**          | Returns true if the array is empty, otherwise returns false                                                                                                                                           |
| **void print()**            | Prints all the elements in the array. ex) 1 2 3 4 5                                                                                                                                                   |


\<Example\>  
output
```
0-th Array is empty
1-th Array is not empty
Array is Empty
After push 2
2 
2 
After push 5
2 5 
2 5 
After push 1
1 2 5 
2 5 1 
After push 2
1 2 2 5 
2 5 1 2 
After pop
2 2 5 
2 5 1 
After pop
2 5 
2 5 
Array is Full
```