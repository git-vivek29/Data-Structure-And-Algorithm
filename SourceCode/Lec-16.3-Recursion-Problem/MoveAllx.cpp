#include<iostream>
using namespace std;
string moveAllx(string s)
{
    if(s.length() ==0)
    {
        return "";
    }
    char ch = s[0];
    string ros = moveAllx(s.substr(1));
    if(ch == 'x')
    {
        return ros+ch;
    }
    return ch+ros;
}
int main()
{
    cout<<moveAllx("axxdedxxwdx");
    return 0;
}