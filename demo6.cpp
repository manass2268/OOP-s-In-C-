#include <iostream>
#include <string>
using namespace std;

// Constructor

class Teacher
{
private:
    double salary;

public:
    // NON-Partemsized Constructor or deflaut constructor
    Teacher()
    {
        cout << "Constructor Calling\n"; // Constructor Calling or written by programmer not a by defalut compiler
        department = "CSD";              // Constructor can create object automatically
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
    Teacher T1; // Internalyy Constuctor calling
    T1.name = "MANAS";
    T1.subject = "C++";

    T1.setSalary(25000);

    cout << T1.name << endl;
    cout << T1.department << endl;
    cout << T1.getSalary() << endl;
    return 0;
}