# Dynamic Array

In this task, we will implement a class template to create dynamic array that can store different type to data

1. Write a function **append()** to append array
```c++
template <typename T>
void DynamicArray<T>::Append(DynamicArray *da) {
    //TODO
}
```
- Append array `da` at the end of this array


2. Write a function **subseq()** to return a fresh subsequence that starts from `idx` and includes up to `n` consecutive elements in this array
```c++
template <typename T>
DynamicArray<T>* DynamicArray<T>::Subseq(int idx, int n) {
    //TODO
}
```
- If ‘idx’ < 0 or 'idx' >= ‘length’, return an empty DynamicArray 
- If the subsequence reaches the end before including ‘n’ elements, return a subsequence that stops there  


Expected Output
```
1.2, 3.3, 5.4, 2.7, 4.8, 7.5
2.7, 4.8
2.7, 4.8, 7.5
```