// Pratical-15
// WAP to Demonstrate Virtual function.
#include <iostream>
using namespace std;
class A
{
public:
    virtual void show()
    {
        cout << "Class A" << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "Class B";
    }
};
int main()
{
    A *p;
    B obj;
    p = &obj;
    p->show();
    return 0;
}