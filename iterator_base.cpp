#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void)
{
    vector <int> a(10, 2);
    vector <int>::reverse_iterator iter = a.rbegin();
    int i;
    for (i = 1; iter != a.rend(); iter++, i++) 
    {
        *iter = i;
    }
    vector <int>::reverse_iterator iter2 = find (a.rbegin(), a.rend(), 5);

    cout << *iter2.base() << endl;
    return 0;
}
