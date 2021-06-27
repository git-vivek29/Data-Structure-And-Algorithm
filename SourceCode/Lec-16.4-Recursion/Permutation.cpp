#include<iostream>
using namespace std;
void permutation(string s,string res)
{
    if(s.length() ==0)
    {
        cout<<res<<endl;
        return;
    }
    for(int i=0;i<s.length();i++)
    {
        char ch = s[i];
        string ros = s.substr(0,i)+s.substr(i+1);
        permutation(ros,res+ch);
    }
}
int main()
{
    permutation("ABC","");
    return 0;
}