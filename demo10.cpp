// Deep Copy Implementation in C++ using Copy Constructor

#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    string name;
    double *cgpaPtr; // Heap Pointer to store CGPA

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double; // Dynamicaly allocated on Heap
        *cgpaPtr = cgpa;      // Dereferencing the pointer to store the value of CGPA
    }
    // Custom Deep Copy Constructor
    Student(const Student &origObj)
    {
        this->name = origObj.name;
        cgpaPtr = new double;          // New Memory allocate
        *cgpaPtr = *(origObj.cgpaPtr); // Value copying from the original object to the new object
    }
    // Destructor to prevent memory leaks
    ~Student()
    {
        delete cgpaPtr; // Free Heap Memory
    }

    void getInfo()
    {
        cout << "Name: " << this->name << " CGPA: " << *(this->cgpaPtr) << endl;
    }
};

int main()
{
    Student s1("Ram", 8.9);
    Student s2 = s1; // Copy Constructor is called here

    cout << "Original State" << endl;
    s1.getInfo();
    s2.getInfo();
    // Modifying s2's CGPA to see if it affects s1
    *(s2.cgpaPtr) = 9.5;
    s2.name = "Rahul";
    cout << "After Modification" << endl;
    s1.getInfo();
    s2.getInfo();
}