#include <iostream>
#include <string>
using namespace std;

// Encapsulation

class Account
{
private:
    double balance;
    string Password; // Data Hiding

public:
    string AccountNumber;
    string userName;
};

class Teacher
{
private:
    double salary;

public:
    string name;
    string subject;
    string department;

    // Methods / Member Functions
    void changeDepartment(string newDepartment)
    {
        department = newDepartment;
    }

    // Setter Function (ANd this was to set the private member function)
    void setSalary(double s)
    {
        salary = s;
    }

    // Getter Function (ANd this was to get the private member function)
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    Teacher T1;
    T1.name = "MANAS";
    T1.subject = "C++";
    T1.department = "CS";

    T1.setSalary(25000); // using this to set the value of private member function

    cout << T1.name << endl;
    cout << T1.getSalary() << endl; // using this to get the private member function access
    return 0;
}