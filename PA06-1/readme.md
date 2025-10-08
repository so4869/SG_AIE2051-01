# Inheritance

In this task, you will implement two classes from class UnivMem: Student and Professor.
These two classes inherits members of class UnivMem including its attributes and methods.
Please follow the instructions below one-by-one.

**1. Implement Student class**  
Inherit class UnivMem (slide 5) and implement constructor Student(). Since direct access to members of parent class is not allowed. We need to use a **member initializer** explained in slide 9. Please refer to the slide.

Student class has **one additional attribute GPA representing the average of GPA (type is double).**
Please intialize GPA attribute in the constructor of class Student and print GPA attribute in the constructor like the follwing format.
```
student: GPA
```

For example,
```
student: 4.3
```

**2. Implement Professor class**  
Do the same thing for prfessor class. In this time, Professor class has a different attribute room that represents a professor’s **room number (datatype is integer).**  
Please intialize room attribute in the constructor of class Professor.

Please print room attribute in the constructor like the format below.
```
professor: ROOM
```

For example,
```
professor: 818
```

---
After implementing all about this, your program should print like the below:
```
univmem: 13241324 34
professor: 818
univmem: 13241324 34
univmem: 20241111 20
student: 4.30
univmem: 20241111 20
```