# Sorting

In this task, we will implement function templates for 'findMax' and 'simpleSort' to sort an array using "selection sort" algorithm

1. Write a function **findMax()** to find maximum element in an array and swap it with the first element  
```c++
template <typename T>
void find_max(T* arr, int n) {
    //TODO
}
```
- Argument n is the length of the array argument arr  
  a. Find the maximum element from T* arr  
  b. swap the maximum element with arr[0]  
  c. Other elements must remain unchanged  
  d. If arr is empty, don't have to do anything


2. Write a function **simpleSort()** to sort array using "selection sort" algorithm. **Selection sort** is a simple sorting algorithm that repeatedly selects the maximum element from an unsorted portion of the array and swaps it with the first element, gradually building a sorted sequence.
```c++
template <typename T>
void simple_sort(T* arr, int n) {
    //TODO
}
```
- Argument n is the length of the array argument arr  
  a. Sort the elements in T* arr in a descending order. This can be done easily by using findMax().  
  b. If arr is empty, don't have to do anything  


Expected Output
```
10, 8, 3, 5, 2
10, 8, 5, 3, 2
9.7, 3.4, 4.5, 6.3
9.7, 6.3, 4.5, 3.4
```