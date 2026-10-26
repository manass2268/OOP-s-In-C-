#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    // Properties / Attributes
    string name;
    string subject;
    string department;
    double salary;

    // Methods / Member Functions
    void changeDepartment(string newDepartment)
    {
        department = newDepartment;
    }
};
int main()
{
    Teacher T1;
}