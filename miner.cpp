#include <iostream>
#include <vector>
using namespace std;
#if 1
    template <class elemType>
elemType min(vector<elemType> &v)
{
    class vector<elemType>::iterator iter = v.begin();
    elemType i = *iter;
    cout << i << endl;
    for(iter = v.begin(); iter < v.end(); iter++)
    {
        if(i > *iter)
            i = *iter;
    }
#if 0
    elemType t = v[0];
    for(int i = 0; i <= 6; i++)
    {
        if(t > v[i])
            t = v[i];
    }
#endif

    return i;
}
#endif

int main(void)
{
    int a[7] = {1, 3, 4, 3, 4, 5, 6}; 
    vector<int> vec(a, a + 7);

    //vector<int>::iterator iter;
    cout << min(vec) << endl;

    return 0;
}

