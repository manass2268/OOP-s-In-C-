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
    T1.name = "MANAS";
    T1.subject = "C++";
    T1.department = "CS";
    T1.salary = 2000;
    cout << T1.name << endl;
    return 0;
}