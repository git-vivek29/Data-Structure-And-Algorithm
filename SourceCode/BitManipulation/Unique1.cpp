/*
Problem : https://youtu.be/WEpLyOc0bCE?t=28
*/
#include<iostream>
using namespace std;
int unique(int arr[],int n)
{
    int xorsum = 0;
    for(int i=0;i<n;i++)
    {
        xorsum = xorsum^arr[i];
    }
    return xorsum;
}
int main()
{
    int arr[] = {2,4,6,3,4,6,2,3,7};
    int ans = unique(arr,9);
    cout<<ans<<endl;
    return 0;
}