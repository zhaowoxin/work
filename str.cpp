// It`s about the C++ String Class

#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(int argc, const char *argv[])
{
    string name = "hello world";
    char * namechar = "hello world";

    cout << name.size() << endl << sizeof(name) << endl;
    
    return 0;
}
