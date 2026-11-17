// Pratical-2
// WAP using function with deafult agruments to perform addition of two numbers.
#include <iostream>
using namespace std;
int sum(int a, int b = 10)
{
    return a + b;
}

int main()
{
    cout << "Sum is: " << sum(5) << endl;
    return 0;
}