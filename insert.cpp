#include<iostream>
#include<string>
using namespace std;

int main(void)
{
    string s = "some thing";
    string s2 = "some other thing";
    
    //cout << " " << s.insert(0, s2, 0, s2.size()) << endl;
    //cout << s.insert(s.begin(), s2.begin(), s2.end()) << endl;
    cout << s.data() << endl;
    //cout << s.insert(0, s2) << endl;

    return 0;
}
