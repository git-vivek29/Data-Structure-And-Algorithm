#include<iostream>
using namespace std;
string removeDuplicate(string s)
{
    if(s.length() == 0)
    {
        return "";
    }
    char ch = s[0];
    string ros = removeDuplicate(s.substr(1));
    if( ch == ros[0])
    {
        return ros;
    }
    return ch+ros;
}
int main()
{
    cout<<removeDuplicate("aaabbeecdd");
    return 0;
}