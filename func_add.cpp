#include<iostream>
using namespace std;

class  A{
public:
    void b() { cout << "call b()" << endl;}
};

int main(int argc, const char *argv[])
{
    typedef void (A::*ptr)();
    ptr c = &A::b;
    cout << "ptr c = " << c << " " << sizeof(A) << endl;
    A a;
    (a.*c)();
    
    return 0;
}
