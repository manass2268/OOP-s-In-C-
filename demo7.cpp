#include <iostream>
#include <string>
using namespace std;

// Types of Constructor

class Teacher
{
private:
    double salary;

public:
    /* // NON-Partemsized Constructor or deflaut constructor
        Teacher()
        {
            cout << "Constructor Calling\n"; // Constructor Calling or written by programmer not a by defalut compiler
            department = "CSD";              // Constructor can create object automatically
        }*/

    // Partemsized Constructor
    Teacher(string n, string d, string s, double sal)
    {
        cout << "Paramertised-Constructor Calling\n"; // Constructor Calling or written by programmer not a by defalut compiler
        name = n;
        department = d;
        subject = s;
        salary = sal;
    }
    string name;
    string subject;
    string department;

    void changeDepartment(string newDepartment)
    {
        department = newDepartment;
    }

    void setSalary(double s)
    {
        salary = s;
    }
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher T1("Manas ", "CSD", "C++", 25000); // Internalyy Parametersied -Constuctor calling

    /*T1.name = "MANAS";
    T1.subject = "C++";

    T1.setSalary(25000);

    cout << T1.name << endl;
    cout << T1.department << endl;
    cout << T1.getSalary() << endl;*/
    return 0;
}