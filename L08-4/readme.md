# Node deletion

In this task, we **delete** a node at the k-th element. (k is start from 1)  
We first find the k-th node by repeating moving to the next node k times.  
Then, we delete it from the memory by using syntax delete.  
To maintain the linking structure, we let the k-1-th node point the k+1-th node.  
If the head node is deleted, we need to set the head node to the next of the deleted head node.

Also, use the previous exercise to complete the **printlist function** to check whether delete is progressing smoothly.


#### Input example
```
5
3
```

#### Output example
```
4 3 2 1 0
4 3 1 0
```
