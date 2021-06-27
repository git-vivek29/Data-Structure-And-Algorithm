/*
Pair sum problem
Problem link: https://youtu.be/0JYgnhnZFcE?list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&t=1482
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {2,4,7,11,14,16,20,21};
    int n = 8;
    int low =0;
    int high = 7;
    int k =31;
    while(low<high)
    {
        if(a[low]+a[high] == k)
        {
            cout<<low<<" "<<high<<endl;
            cout<<"Found";
            return 0;
        }
        if( a[low]+a[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    cout<<"Not found"<<endl;
    return 0;
}