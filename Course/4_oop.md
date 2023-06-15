# Object-Oriented Programming in C++ 17
## Table of Contents

1. [Introduction](#introduction)
2. [Classes and Objects](#classes-and-objects)
3. [Encapsulation](#encapsulation)
4. [Inheritance](#inheritance)
5. [Polymorphism](#polymorphism)
6. [Conclusion](#conclusion)

## 1. Introduction
Object-Oriented Programming (OOP) is a programming paradigm based on the concept of "objects", which are data structures that contain data in the form of fields, often known as attributes; and code, in the form of procedures, often known as methods. The main principles of OOP are encapsulation, inheritance, and polymorphism. In this tutorial, we will explore these principles using C++ 17.

## 2. Classes and Objects
A class in C++ is a user-defined type or data structure declared with keyword `class` that has data and functions (also called methods) as its members whose access is governed by the three access specifiers - private, protected or public.
A class is a blueprint for objects. We can create multiple objects of a class.
```cpp
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15; 
  myObj.myString = "Hello";

  // Print attribute values
  cout << myObj.myNum << "\n"; 
  cout << myObj.myString;

  return 0;
}

```
## 3. Encapsulation
Encapsulation is one of the fundamental concepts in OOP. It refers to the bundling of data, and methods that work on that data, into one unit. This concept is also often used to hide the internal representation, or state, of an object from the outside.
```cpp
class Employee {
  private:
    // data members
    string name;
    int age;

  public:
    // member functions
    void setName(string n) { name = n; }
    void setAge(int a) { age = a; }
    string getName() { return name; }
    int getAge() { return age; }
};

int main() {
  Employee e1;
  e1.setName("John");
  e1.setAge(25);
  cout << "Name: " << e1.getName() << "\n"; 
  cout << "Age: " << e1.getAge() << "\n";
  return 0;
}

```
## 4. Inheritance
Inheritance is a process by which one object can acquire the properties of another object. This is important for code reusability and for allowing to add additional features to an existing class without modifying it.
```cpp
// base class
class Vehicle {
  public:
    Vehicle() { cout << "This is a Vehicle" << endl; }
};

// sub class inheriting from Vehicle
class Car: public Vehicle {
  public:
    Car() { cout << "This is a Car" << endl; }
};

int main() {
  Car carobj;    // creates object for Car
  return 0;
}

```
## 5. Polymorphism
Polymorphism means "many forms". It occurs if there is a hierarchy of classes related to inheritance. This is important for providing a single interface to represent different classes.
```cpp
class Base {
  public:
    virtual void print() { cout << "Base function" << endl; }
};

class Derived: public Base {
  public:
    void print() { cout << "Derived function" << endl; }
};

int main() {
  Base *bptr;
  Derived d;
  bptr = &amp;d;
  
  // virtual function, binded at runtime (Runtime polymorphism)
  bptr->print();
  
  return 0;
}

```

## Inheritance in C++

Inheritance is a feature in C++ which allows a class to inherit features from another class. The class that inherits features is known as the derived class, and the class that gets inherited from is known as the base class.
Inheritance allows for reusability of code and allows derived classes to incorporate and modify the behavior of the base class.
There are different types of inheritance in C++, namely:

1. Single Inheritance
2. Multiple Inheritance
3. Multilevel Inheritance
4. Hierarchical Inheritance
5. Hybrid Inheritance

### 1. Single Inheritance
Single inheritance occurs when a class is derived from a single base class.
```cpp
class Base {
public:
    void baseFunction() {
        cout << "Function from base class" << endl;
    }
};

class Derived : public Base {
public:
    void derivedFunction() {
        cout << "Function from derived class" << endl;
    }
};

int main() {
    Derived d;
    d.baseFunction();     // Accessing base class function
    d.derivedFunction();  // Accessing derived class function

    return 0;
}

```

### 2. Multiple Inheritance
Multiple inheritance occurs when a class is derived from more than one base class.
```cpp
class Base1 {
public:
    void base1Function() {
        cout << "Function from Base1" << endl;
    }
};

class Base2 {
public:
    void base2Function() {
        cout << "Function from Base2" << endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void derivedFunction() {
        cout << "Function from derived class" << endl;
    }
};

int main() {
    Derived d;
    d.base1Function();    // Accessing function from Base1
    d.base2Function();    // Accessing function from Base2
    d.derivedFunction();  // Accessing derived class function

    return 0;
}

```

### 3. Multilevel Inheritance
Multilevel inheritance occurs when a class is derived from a class which is itself derived from another class.
```cpp
class Base {
public:
    void baseFunction() {
        cout << "Function from base class" << endl;
    }
};

class Middle : public Base {
public:
    void middleFunction() {
        cout << "Function from middle class" << endl;
    }
};

class Derived : public Middle {
public:
    void derivedFunction() {
        cout << "Function from derived class" << endl;
    }
};

int main() {
    Derived d;
    d.baseFunction();     // Accessing base class function
    d.middleFunction();   // Accessing middle class function
    d.derivedFunction();  // Accessing derived class function

    return 0;
}

```

### 4. Hierarchical Inheritance
Hierarchical inheritance occurs when more than one class is derived from a single base class.
```cpp
class Base {
public:
    void baseFunction() {
        cout << "Function from base class" << endl;
    }
};

class Derived1 : public Base {
public:
    void derived1Function() {
        cout << "Function from Derived1 class" << endl;
    }
};

class Derived2 : public Base {
public:
    void derived2Function() {
        cout << "Function from Derived2 class" << endl;
    }
};

int main() {
    Derived1 d1;
    d1.baseFunction();     // Accessing base class function
    d1.derived1Function(); // Accessing derived class function

    Derived2 d2;
    d2.baseFunction();     // Accessing base class function
    d2.derived2Function(); // Accessing derived class function

    return 0;
}

```

### 5. Hybrid Inheritance
Hybrid inheritance is a combination of multiple and multilevel inheritance. It means having more than one form of inheritance.
```cpp
class Base {
public:
    void baseFunction() {
        cout << "Function from base class" << endl;
    }
};

class Derived1 : public Base {
public:
    void derived1Function() {
        cout << "Function from Derived1 class" << endl;
    }
};

class Derived2 : public Base {
public:
    void derived2Function() {
        cout << "Function from Derived2 class" << endl;
    }
};

class Derived3 : public Derived1, public Derived2 {
public:
    void derived3Function() {
        cout << "Function from Derived3 class" << endl;
    }
};

int main() {
    Derived3 d3;
    d3.baseFunction();     // Accessing base class function
    d3.derived1Function(); // Accessing Derived1 class function
    d3.derived2Function(); // Accessing Derived2 class function
    d3.derived3Function(); // Accessing Derived3 class function

    return 0;
}

```

## Polymorphism in C++
Polymorphism allows methods to act differently based on the object that it is acting upon. Polymorphism is often expressed as 'one interface, multiple functions'.
There are two types of polymorphism in C++:

1. Compile time Polymorphism (Function Overloading and Operator Overloading)
2. Runtime Polymorphism (achieved by Function Overriding - using virtual functions)

### 1. Compile time Polymorphism (Function Overloading)

Function overloading is when multiple functions with the same name but different parameters are used.
```cpp
class Add {
public:
    int sum(int x, int y) { return x + y; }
    int sum(int x, int y, int z) { return x + y + z; }
};

int main() {
    Add a;
    cout << a.sum(10, 20) << "\n";     // Calls first sum function
    cout << a.sum(10, 20, 30) << "\n";  // Calls second sum function

    return 0;
}

```

### 2. Runtime Polymorphism (Function Overriding)
Function overriding is a feature that allows us to have a same function in child class which is already present in the parent class. A child class inherits the data members and member functions of parent class, but when you want to override a functionality in the child class then you can use function overriding.
```cpp
class Base {
public:
    virtual void print() {
        cout << "This is base class's print function" << endl;
    }
};

class Derived : public Base {
public:
    void print() override {
        cout << "This is derived class's print function" << endl;
    }
};

int main() {
    Base *bptr;
    Derived d;
    bptr = &amp;d;
  
    // virtual function, binded at runtime (Runtime polymorphism)
    bptr->print();
  
    return 0;
}

```
