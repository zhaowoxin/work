#include<iostream>
using namespace std;

class Base {
public:
    Base () {}
    virtual ~Base () { /*cout << "address is " << (int *)&this << endl;*/}
    virtual void f() { cout << "base::f" << endl;}
    virtual void g() { cout << "base::g" << endl;}
    virtual void h() { cout << "base::h" << endl;}
};

int main(int argc, const char *argv[])
{
    typedef void (*fun)(void);
    //fun = &Base::f;
    fun pfun = NULL;
    Base b;
    cout << "address of v_table :" << (int *)(&b) << endl;
    //cout << "address of v_table :" << &b << endl;
    cout << "v_table first function" << (int *)*(int *)(&b) << endl;
    //cout << "v_table first function" << *(int *)(&b) << endl;
    //cout << "real v_table fir func" << (b.*fun)() << endl;
    pfun = (fun)((int *)*(int *)(&b));
    cout << "pfun add " << pfun <<endl;

    return 0;
}
