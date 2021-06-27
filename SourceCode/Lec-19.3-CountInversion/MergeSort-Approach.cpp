//Merge Sort Approach
#include<iostream>
using namespace std;
int merge(int arr[],int low,int mid,int high)
{
    int inv = 0;
    int n1 = mid - low +1;
    int n2 = high - mid;
    int L[n1];
    int R[n2];
    for(int i =0;i<n1;i++)
    {
        L[i] = arr[low+i];
    }
    for(int i =0;i<n2;i++)
    {
        R[i] = arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k = low;
    while(i<n1 && j<n2)
    {
        if(L[i] < R[j])
        {
            arr[k] = L[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = R[j];
            inv += (n1 - i);
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k] = L[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k] = R[j];
        k++;
        j++;
    }
    return inv;
}
int mergeSort(int arr[],int low,int high)
{
    int inv = 0;
    if(low < high)
    {
        int mid = (low+high)/2;
        inv += mergeSort(arr,low,mid);
        inv += mergeSort(arr,mid+1,high);
        inv += merge(arr,low,mid,high);
    }
    return inv;
}
int main()
{
    int arr[] ={3,5,6,9,1,2,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = mergeSort(arr,0,n-1);
    cout<<count;
    return 0;
}

//TC = O(nlogn)