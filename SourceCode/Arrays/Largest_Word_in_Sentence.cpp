#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    char arr[n];
    cin.getline(arr,n);
    cin.ignore();
    int curlen = 0;
    int maxlen =0;
    int i=0;
    int st = 0,maxst= 0;
    while(arr[i] != '\0')
    {
        if(arr[i] == ' ')
        {
            if(curlen>maxlen)
            {
                maxst = st;
                maxlen = curlen;
            }
            curlen = 0;
            st = i+1;
        }
        else
            curlen++;
        i++;
    }
    if(curlen>maxlen)
    {
        maxst = st;
        maxlen = curlen;
    }
    cout<<maxlen<<endl;
    for(int i =0;i<maxlen;i++)
    {
        cout<<arr[maxst+i];
    }
    return 0;
}