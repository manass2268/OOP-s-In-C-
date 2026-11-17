// Partical-9
// WAP using Classes with Static Data Members.
#include <iostream>
using namespace std;
class Student
{
    static int count; // Static data member to keep track of the number of Student objects
public:
    Student()
    {
        count++; // Increment count whenever a new Student object is created
    }
    static void display()
    {
        cout << "Number of Student objects created: " << count << endl;
    }
};
int Student::count = 0; // Initialize static data member
int main()
{
    Student s1, s2, s3;
    Student::display();
}