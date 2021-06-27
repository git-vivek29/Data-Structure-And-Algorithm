#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s= "hoihoiwSFWFWF";
    // //TO UPPER CASE 
    // for(int i=0;i<s.size();i++)
    // {
    //     if(s[i]>='a' && s[i]<='z')
    //         s[i] -=32;
    // }
    // cout<<"Upercase string: "<<s<<endl;
    
    // //To lowercase
    // for(int i=0;i<s.size();i++)
    // {
    //     if(s[i]>='A' && s[i]<='Z')
    //         s[i]+=32;
    // }
    // cout<<s<<endl;
    
    //To upper case using function
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    //To lowercase using function
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    return 0;
}