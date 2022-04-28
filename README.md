# CISC-3142

## C++ Review Topics

### Classes & Structs: Encapsulation Techniques
Classes & Structs are both ways to encapsulate code in an object-oriented
way. The most noticeable differences between the two are **visibility**
and usage. 

### Constructor Functions & Data Members
A class is made up of at least one constructor function (a default one
is used if none is explicitly provided) and any number of data members.

A constructor function is called when an instance of a class is created.
The constructor function used depends on the arguments provided, as the 
program will call the constructor function with parameters that match the 
arguments (otherwise it will throw an error). 

Data members can include either variables or functions that are created 
for any instance of a class.

### Class Scope & Access Control
Class scope is managed by access control permissions that can be defined
in both classes and structs. Access control specifically refers to the level of
access a program has to the variables declared. Both the Character.cpp and
Player.cpp define access levels of either public, protected, or private.

- Publicly defined members allows the program to access them anywhere
in the code. 
- Protected members allows the program to access them only 
through the class itself and inherited classes. 
- Private members can only be accessed through the class/struct itself.

To access data members of a class or struct instance in C++, we use dot 
notation or arrow notation to access the member through a pointer.

### Default Arguments
Any function can take in default arguments, but default arguments must
be the last ones to be defined in the function parameter list.
Default arguments are used in the Player class' constructor.

### Destructor Functions
Normally, the compiler automatically provides destructor functions for 
classes and structs, and this works fine for several cases. However, 
in the case of dynamically allocated memory for a class, it is 
recommended to use the destructor function to free up any memory allocated 
to it.

### Dynamic Memory Allocation
Refers to the process of a system dynamically allocating memory to the 
program based on a directive given inside the user's program.

### File scope
The scope in which files can be referenced. In C++, files can only 
reference other files when they are included. This causes the files to
be bought into the current file's scope, and allows any data members from 
that file to be used (as long as their declarations and definitions are
linked properly).

### Function Members & Function Member Definitions
Function members are functions within classes that can be defined within 
the class definition, but they can also just be declared and then defined 
elsewhere. When defining it elsewhere, you need to use the scope resolution 
operator linking the class to the definition. The scope resolution operator used 
in both Player and Character cpp files looks like:

`Player::getHealth()`

### Function Scope
Functions have their own scope where any variables defined in a function 
body cannot be accessed anywhere outside the function (unless a reference to
those values are returned).

### Inheritance in C++
The idea of passing along values from one class to the next. Inheritance 
is based on the object-oriented programming paradigm where the idea is similar 
to real life in that some objects are subsets of a greater object.
For example, a Player is a Character, but there can be many types 
of characters. So we can say that a Player inherits the attributes of a 
Character while having its own attributes that make it unique. An
example of this is seen between the Player and Character class.

