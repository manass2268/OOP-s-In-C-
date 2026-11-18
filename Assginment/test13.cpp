// Pratical-13
// WAP to Demonstrate Run time Polymorphisim
#include <iostream>
using namespace std;
class Animal
{
public:
    virtual void Sound()
    {
        cout << "Animal";
    }
};
class dog : public Animal
{
public:
    void Sound()
    {
        cout << "Dog Barks";
    }
};
int main()
{
    Animal *a;
    dog d;
    a = &d;
    a->Sound();
    return 0;
}