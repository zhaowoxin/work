#include <iostream>
using namespace std;

class Shape {
public:
    Shape ( ) { }
    virtual int totallong() = 0;
    virtual int sqare() = 0;
    virtual ~Shape () {cout << "shape \n";}

protected:
    int total, sqaree; 
};

class Square : public Shape {
public:
    Square(int a, int b): loong(a), wide(b)
    { }
    virtual ~Square() { cout << "square\n";}
    virtual int totallong()
    {
       total = 2 * (loong + wide); 
    
       return total; 
    }
    virtual int sqare()
    {
       sqaree = loong * wide;

       return sqaree;
    }
private:
   int loong, wide; 
};

int main()
{
    Shape *sh;
    Square sq(20, 30);

    sh = &sq;
    cout << "the total line is " << sh->totallong() << " the square is " << sh->sqare() << endl; 

    return 0;
}
