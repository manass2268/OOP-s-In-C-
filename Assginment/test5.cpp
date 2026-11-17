// Pratical-5
//  WAP Using Classes with Primitive Data Members.
#include <iostream>
using namespace std;
class Student
{
    int rollno;
    float marks;
    char grade;

public:
    void input()
    {
        cout << "Enter Roll No: ";
        cin >> rollno;
        cout << "Enter Marks: ";
        cin >> marks;
        cout << "Enter Grade: ";
        cin >> grade;
    }
    void display()
    {
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
        cout << "Grade: " << grade << endl;
    }
};
int main()
{

    Student s;
    s.input();
    s.display();
    return 0;
}