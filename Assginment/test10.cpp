// Pratical-10
// Write a program to demonstrate compile-time polymorphism
#include <iostream>
using namespace std;
class Add
{
public:
    void sum(int a, int b)
    {
        cout << a + b << endl;
    }
    void sum(int a, int b, int c)
    {
        cout << a + b + c;
    }
};
int main()
{
    Add obj;
    obj.sum(10, 20);
    obj.sum(10, 20, 30);
}