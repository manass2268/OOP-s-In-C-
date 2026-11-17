// Pratical-7
// WAP using Classes with pointers as Data Members.
#include <iostream>
using namespace std;
class Demo
{
    int *Ptr;

public:
    Demo()
    {
        Ptr = new int;
    }
    void input()
    {
        cout << "Enter Value: ";
        cin >> *Ptr;
    }
    void display()
    {
        cout << "Value is: " << *Ptr;
    }
    ~Demo()
    {
        delete Ptr;
    }
};
int main()
{

    Demo d;
    d.input();
    d.display();
    return 0;
}