/*
Problem link : https://youtu.be/0JYgnhnZFcE?list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&t=991
*/
#include<bits/stdc++.h>
int kadane(int a[],int n);
using namespace std;
int kadane(int a[],int n)
{
    int maxsum = INT_MIN;
    int currsum = 0;
    for(int i=0;i<n;i++)
    {
        currsum += a[i];
        if(currsum < 0)
        {
            currsum =0;
        }
        maxsum = max(currsum,maxsum);
    }
    return maxsum;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int wrapsum;
    int nonwrapsum;
    int totalsum=0;
    nonwrapsum = kadane(a,n);
    for(int i=0;i<n;i++)
    {
        totalsum += a[i];
        a[i] = -a[i];
    }
    wrapsum = totalsum + kadane(a,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
    return 0;
}