#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "aaaabbbbbcccdddaass";
    int n =s.size();
    char ans[100];
    ans[0] = s[0];
    int c = 1;
    for(int i =1;i<n;i++)
    {
        if(s[i] != s[i-1])
        {
            ans[c] = s[i];
            c++;
        }
    }
    cout<<ans<<endl;
    return 0;
}