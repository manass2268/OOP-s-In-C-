// Inheritance in C++ allows a class (derived class) to inherit properties and behaviors (methods) from another class (base class). This promotes code reusability and establishes a relationship between classes.
#include <iostream>
#include <string>
using namespace std;
// Base Class
class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    { // Constructor of Base Class
        cout << "1. Base Class Constructor Called" << endl;
        this->name = name;
        this->age = age;
    }
    ~Person()
    { // Destructor of Base Class
        cout << "4. Base Class Destructor Called" << endl;
    }
};

// Derived Class
class Student : public Person
{ // Inheriting from Base Class Person
public:
    int rollNo;
    // Explicitly calling Base parameterized constructor using initializer list
    Student(string name, int age, int rollNo) : Person(name, age) // Calling Base Class Constructor //
    {
        cout << "2. Derived Class Constructor Called" << endl;
        this->rollNo = rollNo;
    }
    ~Student()
    {
        cout << "3. Derived Class Destructor Called" << endl;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << ", Roll No: " << rollNo << endl;
    }
};

int main()
{
    Student s1("Rohan", 20, 101);
    s1.display();
    return 0;
}