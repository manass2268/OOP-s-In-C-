#include <iostream>
#include <string>
using namespace std;

// Types of Constructor

class Teacher
{
private:
    double salary;

public:
    string name;
    string subject;
    string department;

    /* // NON-Partemsized Constructor or deflaut constructor
        Teacher()
        {
            cout << "Constructor Calling\n"; // Constructor Calling or written by programmer not a by defalut compiler
            department = "CSD";              // Constructor can create object automatically
        }*/

    // Partemsized Constructor
    Teacher(string name, string department, string subject, double salary)
    {
        cout << "Paramertised-Constructor Calling\n"; // Using (this) operator to avoid ambiguity between class members and parameters

        // (This) operator is used to refer to the current object of the class. It is a pointer that points to the object that invokes the member function. In this case, it is used to distinguish between the class member variables and the parameters passed to the constructor.
        this->name = name;
        this->department = department;
        this->subject = subject;
        this->salary = salary;
    }
    string name;
    string subject;
    string department;

    void changeDepartment(string newDepartment)
    {
        department = newDepartment;
    }

    /*void setSalary(double s)
    {
        salary = s;
    }
    double getSalary()
    {
        return salary;
    }*/

    void getInfo() // Inline Function is calling
    {
        cout << "name: " << name << endl;
        cout << "department: " << department << endl;
        cout << "subject: " << subject << endl;
        cout << "salary: " << salary << endl;
    }
};

int main()
{
    Teacher T1("Manas ", "CSD", "C++", 25000); // Internalyy Parametersied -Constuctor calling
    T1.getInfo();                              // Paratmerised function calling
    /*T1.name = "MANAS";
    T1.subject = "C++";

    T1.setSalary(25000);

    cout << T1.name << endl;
    cout << T1.department << endl;
    cout << T1.getSalary() << endl;*/
    return 0;
}