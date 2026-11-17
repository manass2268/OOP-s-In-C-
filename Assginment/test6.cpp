// Pratical-6
//  WAP to using class with Arrays as Data Members
#include <iostream>
using namespace std;
class Student
{
    int marks[5];

public:
    void input()
    {
        cout << "Enter 5 Subject Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cin >> marks[i];
        }
    }
    void display()
    {
        cout << "Marks Are: ";
        for (int i = 0; i < 5; i++)
        {
            cout << marks[i] << " ";
        }
    }
};
int main()
{
    Student s;
    s.input();
    s.display();
    return 0;
}