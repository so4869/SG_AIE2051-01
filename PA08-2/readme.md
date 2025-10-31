# Insertion at k-th location

**1. Get a code from previous practice code**  
paste a code (printList() and deleteList()) from PA08-1.

**2. code implementation**
- **insertIndex(Node \*\*front, int index, int value)**
  - The function takes a reference to the head pointer of the list, an index, and the value to insert.
  - Insert the given value into a new node at the specific position of the list.
  - Use dynamic allocation to create a new Node.
- Example

Your function takes the following sequence of values:
```
42 -3 17
```

The call of insertIndex(front, 2, 33) should change the list to the following:  
(the **index is start from 0**. same as list index.)
```
42 -3 33 17
```
