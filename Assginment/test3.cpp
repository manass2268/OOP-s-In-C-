// Pratical-3
// WAP to Prefrom to implement call by Value and Call by Address and Call by Reference.
#include <iostream>
using namespace std;
void value(int x)
{
    x = x + 10;
}
void address(int *x)
{
    *x = *x + 10;
}
void reference(int &x)
{
    x = x + 10;
}
int main()
{
    int a = 10, b = 10, c = 10;
    value(a);
    address(&b);
    reference(c);
    cout << "Call by value = " << a << endl;
    cout << "Call by address = " << b << endl;
    cout << "Call by Reference = " << c << endl;
}