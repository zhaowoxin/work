#include<iostream>
#include<stack>
#include<string>
using namespace std;

class number_of_words_t {
public:
    number_of_words_t (const string &str, int num = 0, int leng = 0)
    {
       words = str; 
       number = num;
       length = leng;
    }
    int word_num (string &str);
    void word_length (string &str);
    virtual ~number_of_words_t () {}

private:
    string words;
    int number;
    int length;
};

int number_of_words_t::word_num (string &str)
{
    string::size_type pos = 0;
    int i = 0;
    while ((pos = str.find_first_of (' ', pos)) != string::npos)    
    {
       i ++; 
       pos ++;
    }
    number_of_words_t::number = i + 1;

    return i + 1;
}

void number_of_words_t::word_length (string &str)
{
    string::size_type q, p = 0, pos;
    int i = 0, max = 0, min = 2, len;
    //string::iterator p = str.begin();
    stack<string> st;

    while (p < str.size())
    {
        q = str.find_first_of (' ', p);
        //cout << q << endl;
        if (q == string::npos)
        {
            //cout << "until tail" << endl;
            len = str.size() - p;
        }
        else
            len = q - p;
        if (len > max)
        {
            max = len;
            pos = p;
        }
        else if (len < min)
        {
            min = len;
            pos = p;
        }
        else if (len == min)
        {
            cout << "shortest: " << str.substr (pos, min) << ' ' << endl;;
            pos = p;
        }
        else if (len == max)
        {
            cout << "longest: " << str.substr (pos, max) << ' ' << endl;
            pos = p;
        }
        if (q != string::npos)
            p += len + 1;
        else
            break;
    }
    cout << str.substr (pos, max) << endl;
    cout << str.substr (pos, min) << endl;
}

int main(void)
{
    string::size_type i = 0;

    string buf("we were her pride of 10 she named us: Benjamine, Phoniex, the Prodigal, and persipicacious pacific Suzanne");
    number_of_words_t obstr("we were her pride of 10 she named us: Benjamine, Phoniex, the Prodigal, and persipicacious pacific Suzanne");
    cout << obstr.word_num(buf) << endl;
    cout << buf.find_first_of (' ', i) << endl;
    obstr.word_length (buf);

    return 0;
}
