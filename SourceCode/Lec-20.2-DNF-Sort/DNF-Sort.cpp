#include<bits/stdc++.h>
using namespace std;
void DNFSort(int arr[],int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        if(arr[mid] == 1)
        {
            mid++;
        }
        if(arr[mid] == 2)
        {
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}
int main()
{
    int arr[] = {1,1,2,0,0,1,2,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    DNFSort(arr,n);
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}