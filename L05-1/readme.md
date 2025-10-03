# Make your first class object

In this task, we will define a class datatype Student and create an student object.

**Class part**  
To define the class datatype, use keyword class with class name “Student”:
Here is one example.
```c++
class Student{
};
```

At this step, the class type is defined but there is no information. It is time to declare what variables and functions are in this class datatype. A Student class has two integer variables as an id and an age. Keyword “public” allows following components accessible.
```c++
class Student{
public:
    int id;
    int age;
};
```

Then, declare print function() in Student class.
```c++
class Student{
public:
    int id;
    int age;
    void print();
};
```

Since the function is declared, the function should be defined. There are two ways to define the function.
**Way 1 - Definition in class**
```c++
class Student{
public:
    int id;
    int age;
    void print(){
        ...;
    }
};
```
Way 1 declares and defines the function inside the class.

**Way 2 - Definition after class**
```c++
class Student{
public:
    int id;
    int age;
    void print();
};
void Student::print(){
        ...;
}
```
Like Way 2, it is possible to define the class after the declaration. Way 2 is commonly used when making the library.

Your print function prints its id and age in the following format:
```
This is id ID, a AGE old student.
```
This is id ID, a AGE old student.

**Main part**
Parse two integer inputs to student object x. To access an element of a class, use “.” operator.
```
x.id
x.age
```

After parsing, print information of object x by calling class function “print”.