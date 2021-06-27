#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int r)
{
    int pivot = arr[r];
    int i = l-1;
    for(int j = l; j<r;j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
void quickSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pi = partition(arr,l,r);
        quickSort(arr,l,pi-1);
        quickSort(arr,pi+1,r);
    }
}
int main()
{
    int arr[] ={5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
// Time Complexity depends on Partition : best case - Median , worst case - last element
//Best case time complexity  = O(nlog)
//Worst case time Complexity = O(N^2) 