// Pratical-12
//  WAP to Demonsatrate Function Overloading.
#include <iostream>
using namespace std;
void show(int a)
{
    cout << "Number = " << a << endl;
}
void show(int a, int b)
{
    cout << "Sum = " << a + b;
}
int main()
{
    show(10);
    show(20, 90);
}