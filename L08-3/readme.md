# Node insertion

In this task, we parse array elements into a linked list.

To this end, we first construct a node with each element.  
There are three ways to construct.
```c++
tmp = new Node();
tmp = new Node(10);
tmp = new Node(10, head);
```

Then, we insert the node into the linked list.

If there is no node in the linked list (head node is null), we set head node to the new node.

If there is a node, we make the new node point to the head node then replace the original head node with the new node.

The program then prints out all elements to check the correctness of your program.

#### Input example
```
5
1 2 3 4 5
```

#### Output example
```
5 4 3 2 1 
```
