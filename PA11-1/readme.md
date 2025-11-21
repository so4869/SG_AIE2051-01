# let us use the container 'vector'
###### 이 예제는 채점용 검증 function이 담긴 `PA.hpp` file을 제공받지 못했기 때문에, mock up file을 직접 작성 하였습니다.

The program has two parts.  
In the first part, the program generates random numbers n times and attaches every sampled number at the end of the array.

Your task is to put each element at the back and implement the template function `printElementsUsingIterator`<T>.  
In this part, you should write a function `insertItem` in **myfunc.hpp** and `printElementsUsingIterator` in **container.hpp.**

The second part is to erase the smallest number iteratively. If there are multiple minimum numbers, erase from the front where the index is lower.
In this part, you should write a function `findMinimum` in **myfunc.hpp** and `printElementsLikeArray` in **container.hpp.**
The functions `checkInsertItem` and `checkFindMinimum` are in PA.hpp, but you can’t see the code. These functions are only used for scoring.

Your result should be similar to the Output example.


**Output example**
```
0 
0 1
0 1 6
0 1 6 4
0 1 6 4 4
0 1 6 4 4 1
0 1 6 4 4 1 0
0 1 6 4 4 1 0 6
0 1 6 4 4 1 0 6 6
0 1 6 4 4 1 0 6 6 8
1 6 4 4 1 0 6 6 8
1 6 4 4 1 6 6 8
6 4 4 1 6 6 8
6 4 4 6 6 8
6 4 6 6 8
6 6 6 8
6 6 8
6 8
8
```

