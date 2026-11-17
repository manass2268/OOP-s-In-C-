// Partical-8
// WAP using Classes with Constant Data Members.
#include <iostream>
using namespace std;

class Student
{
    const int rollno;

public:
    Student() : rollno(0) // Initialize constant member in constructor initializer list
    {
    }
    void display()
    {
        cout << "Roll No: " << rollno << endl;
    }
};
int main()
{
    Student s;
    s.display();
    return 0;
}