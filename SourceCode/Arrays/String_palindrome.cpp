#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int i = 0, j = n-1;
    bool flag = true;
    while(i<j)
    {
        if(arr[i] == arr[j])
        {
            i++;
            j--;
        }
        else
        {  
            flag = false;
            break;
        }
    }
    if(flag == true)
        cout<<"Palindrome"<<endl;
    else    
        cout<<"Not Palindrome";
    return 0;
}