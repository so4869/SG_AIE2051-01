# Sorting students' information

There are three types of student information of Sogang University: id, name and age.  
Lisa wants to sort the list of students in descending and ascending order based on their information.  

**Let us implement a program that outputs increasing/decreasing sequences with respect to each element.**  
_The output should be written in "output.txt"._

You should output multiple sorted sequences in the following order: (1)id-decreasing, (2)name-decreasing, (3)age-decreasing, (4)id-increasing, (5)name-increasing, and (6)age-increasing.

You should implement two parts: reading input from the input file and printing output to the output file. Please complete comparison functions and use them to sort students.

If you want to check output in a file, please call `printOutput` function to print what you write in the file.

**Screen Input**
There is one integer screen input to specify an index of input files.  
**for practice case, you should enter just 1.**
```
1
```
In that way, you can use input1.txt in your code.  
The student information are written in 'input1.txt'.  
Each student's id, name, and age information are separated by a space.

**FILE input (input1.txt)**
```
20231234 david 20
20233333 carlos 23
20209876 albert 26
20243690 kelly 19
```

**FILE output**
```
Sort by ID (descending):
ID:20243690,Name:kelly,Age:19
ID:20233333,Name:carlos,Age:23
ID:20231234,Name:david,Age:20
ID:20209876,Name:albert,Age:26
Sort by Name (descending):
ID:20243690,Name:kelly,Age:19
ID:20231234,Name:david,Age:20
ID:20233333,Name:carlos,Age:23
ID:20209876,Name:albert,Age:26
Sort by Age (descending):
ID:20209876,Name:albert,Age:26
ID:20233333,Name:carlos,Age:23
ID:20231234,Name:david,Age:20
ID:20243690,Name:kelly,Age:19
Sort by ID (ascending):
ID:20209876,Name:albert,Age:26
ID:20231234,Name:david,Age:20
ID:20233333,Name:carlos,Age:23
ID:20243690,Name:kelly,Age:19
Sort by Name (ascending):
ID:20209876,Name:albert,Age:26
ID:20233333,Name:carlos,Age:23
ID:20231234,Name:david,Age:20
ID:20243690,Name:kelly,Age:19
Sort by Age (ascending):
ID:20243690,Name:kelly,Age:19
ID:20231234,Name:david,Age:20
ID:20233333,Name:carlos,Age:23
ID:20209876,Name:albert,Age:26
```