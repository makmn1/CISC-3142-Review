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
reference other files when they are included. This causes 