# Aim  
To study and implement **constructors and destructors** in C++.  

# Software Required  
- Visual Studio Code (or any C++ compiler)  
- Operating System: Windows / Linux  

# Theory  

## 1. Constructor Function  
A **constructor** is a special member function of a class that is automatically invoked when an object is created. Its primary role is to **initialize the object’s data members**.  

### Key Characteristics of Constructors  
- Same name as the class.  
- No return type (not even `void`).  
- Automatically called when an object is instantiated.  
- Can be **overloaded** (multiple constructors with different parameter lists).  

### Types of Constructors  

#### (a) Default Constructor  
- Takes no parameters.  
- Automatically provided by the compiler if no constructor is defined.  
- Initializes objects with default values.  

```cpp
class Box {
public:
    Box() {
        cout << "Default constructor called!" << endl;
    }
};

#### (b) Parameterized Constructor  
- Accepts arguments to initialize data members with specific values.  
- Provides flexibility in object creation.  

```cpp
class Box {
public:
    int length;
    Box(int l) {
        length = l;
    }
};

#### (c) Copy Constructor  
- Initializes a new object as a copy of an existing object.  
- Syntax: `ClassName(const ClassName &obj)`  

```cpp
class Box {
public:
    int length;
    Box(Box &b) {
        length = b.length;
    }
};

### Constructor Overloading  
- Multiple constructors with different parameter lists can exist in the same class.  
- This is known as **constructor overloading**.  

```cpp
class Box {
public:
    Box() { cout << "Default constructor" << endl; }
    Box(int l) { cout << "Parameterized constructor" << endl; }
};

## 2. Destructor Function  
A **destructor** is a special member function of a class that is automatically invoked when an object goes out of scope or is deleted.  
Its main purpose is to **release resources** (like memory, files, network connections).  

Think of it as the **cleanup crew** that works when an object’s life ends.  

### Key Characteristics of Destructors  
- Name same as class, but prefixed with `~`.  
- Takes no parameters.  
- Has no return type.  
- Only **one destructor per class** (cannot be overloaded).  
- Called automatically when:  
  - Local objects go out of scope.  
  - Dynamically allocated objects are deleted.  
  - Program ends (global/static objects destroyed).  

### Syntax  
```cpp
class MyClass {
public:
    ~MyClass() {
        // cleanup code
    }
};


## Why Use Destructors?  
- **Memory management** – free dynamically allocated memory.  
- **Resource deallocation** – close files, release locks, etc.  
- **Avoid memory leaks** – ensure resources are properly released.  


## Example: Constructor and Destructor in Action  

```cpp
#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "Constructor called" << endl;
    }

    ~Demo() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Demo obj;   // Constructor runs here
    return 0;   // Destructor runs automatically when program ends
}


### Output  
Constructor called
Destructor called

✅ This completes the implementation and understanding of **constructors and destructors in C++**.  

