#include <iostream>
using namespace std;

class num {
public:
    num (int a, int b);
    virtual ~num ();
    int add (num &);

private:
    int isplus, plus, addnum;
};
num::num(int a, int b)
{
    isplus = a;
    plus = b;
}

num::~num()
{ }

int num::add(num &addcl)
{
    addcl.addnum = addcl.isplus + addcl.plus;

    return addcl.addnum;
}

int main(void)
{
    int a, b;

    cin >> a >> b;
    num addcl(a, b); 
    cout << "The sum is " << addcl.add(addcl) << endl;

    return 0;
}
