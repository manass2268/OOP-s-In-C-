// Pratical-4
// WAP to understand obejct member function and constructor.
#include <iostream>
using namespace std;
class Student
{
    int rollno;

public:
    Student()
    {
        rollno = 101;
    }
    void display()
    {
        cout << "Roll No= " << rollno << endl;
    }
};
int main()
{
    Student s;
    s.display();
    return 0;
}