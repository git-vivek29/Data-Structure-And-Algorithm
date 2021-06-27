#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "noojwqf";
    sort(s.begin(),s.end(),greater<char>());
        cout<<s<<endl;
    return 0;
}