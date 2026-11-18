// Pratical-14
// WAP to implement inhertence
#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "This is Parent Class" << endl;
    }
};
class B : public A
{
public:
    void showB()
    {
        cout << "This Child CLass";
    }
};
int main()
{
    B obj;
    obj.show();
    obj.showB();
    return 0;
}