#include<iostream>
#include<vector>
using namespace std;

template <class T>
class Tmpclass {
public:
    Tmpclass (T x, T y):a(x), b(y){}
     ~Tmpclass (){}
    T add()
    {
       return a + b; 
    }

protected:
    T a, b;
};

class Tmpclass2 : public Tmpclass<int> {
public:
    Tmpclass2 (int x, int y, int z): Tmpclass(x, y), c(z){}
     ~Tmpclass2 (){}
    int add()
    {
        return a + b + c;
    }

private:
    int c;
};

int main(void)
{
    Tmpclass2 num(3, 5, 6);
    Tmpclass<int> num2(3, 5);
    cout << num.add() << " " << num2.add() << endl;
    cout << sizeof(num) << " " << sizeof(num2) << endl;

    return 0;
}
