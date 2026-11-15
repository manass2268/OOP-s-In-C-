// This operator is used to refer to the current object of the class. It is a pointer that points to the object that invokes the member function. In this case, it is used to distinguish between the class member variables and the parameters passed to the constructor.
#include <iostream>
#include <string>
using namespace std;
class Employe
{
public:
    string name;
    double salary;

    Employe(string name, double salary)
    {
        // LHS: obejct memeber variable (via this pointer)
        // RHS: function parameter variable

        this->name = name;
        this->salary = salary;
    }
    void display()
    {
        cout << "Emp: " << this->name << " Salary: " << this->salary << endl;
    }
};

int main()
{
    Employe e1("Rohan", 45000);
    e1.display();
    return 0;
}