// Pratical-11
//  WAP to Demonsatrate Opertor Overloading
#include <iostream>
using namespace std;
class Number
{
public:
    int a;
    Number(int x)
    {
        a = x;
    }
    Number operator+(Number n)
    {
        return Number(a + n.a);
    }
};
int main()
{
    Number n1(10), n2(20);
    Number n3 = n1 + n2;
    cout << "SUM= " << n3.a;
    return 0;
}