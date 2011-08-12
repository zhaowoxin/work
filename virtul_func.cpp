#include<iostream>
using namespace std;

class Animal {
public:
    Animal ()  { cout << "this is a animal class" << endl;}
    virtual ~Animal () {}
    virtual void eat()
    {
        cout << "animal calss eat" << endl;
    }
};

class Cat : public Animal
{
public:
    Cat() { cout << "this is a cat class" << endl;}
    virtual void eat() { cout << "cat class eat" << endl;}
};

int main(void)
{
    Cat b;
    Animal *a = &b;
    a->eat();

    return 0;
}
