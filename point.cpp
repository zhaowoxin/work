#include<iostream>
using namespace std;
int main(void)
{
    float f = 34.5;
    //int *ip = reinterpret_cast<int*> (&f);
    int *ip = (int *)(&f);
    cout << "folat address: " << &f << "=>" << f << endl;
    cout << "int address: " << ip << "=>" << *ip << endl;
    *ip = 100;
    //f = 54.3;
    cout << "int : " << *ip << endl;
    cout << "float : " << f << endl;

    return 0;
}
