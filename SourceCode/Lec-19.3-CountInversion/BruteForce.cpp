//Brute Force
#include<iostream>
using namespace std;
int invCount(int arr[],int n)
{
    int inv = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
                inv++;
        }
    }
    return inv;
}
int main()
{
    int arr[] ={3,5,6,9,1,2,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = invCount(arr,n);
    cout<<count;
    return 0;
}
//TC = O(n^2)