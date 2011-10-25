#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

vector<int> add(vector<int> &a, vector<int> &b)
{
    for (int i = 0; i < a.size(); i++) 
    {
        a[i] += b[i];
    }

    return a;
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7}; 
    int b[] = {2, 3, 4, 5, 6, 7, 8};
    vector<int> aa(a, a + 7);
    vector<int> bb(b, b + 7);
    vector<int> c = add(aa, bb);
    print(aa);
    print(bb);
    print(c);

    return 0;
}
