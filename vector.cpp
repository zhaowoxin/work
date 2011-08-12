#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> ivec;
    cout << "ivec: size :" << ivec.size() <<endl << "capacity :" << ivec.capacity() << endl;
    ivec.reserve(32);
     for (int i = 0; i < 24; i++) 
     {
        ivec.push_back(i);
        cout << " for ivec: size :" << ivec.size() <<endl << "capacity :" << ivec.capacity() << endl;
     }
     //for (int i = 0; i < 24; i++) 
        //for
    return 0;
}
