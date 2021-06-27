#include<iostream>
using namespace std;
bool setBit(int n,int pos)
{
    return ((n & (1<<pos)) != 0);
}
void unique(int arr[],int n)
{
    int xorsum = 0;
    for(int i=0;i<n;i++)
    {
        xorsum = xorsum^arr[i];
    }
    int bit =0;
    int pos = 0;
    while(bit!=1)
    {
        bit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }
    int x1 = 0;
    int x2 = 0;
    for(int i = 0;i<n;i++)
    {
        if(setBit(arr[i],pos-1))
        {
            x1 = x1^arr[i];
        }
        else
        {
            x2 = x2^arr[i];
        }
    }
    cout<<x1<<endl;
    cout<<x2<<endl;
}
int main()
{
    int arr[] = {7,2,3,5,2,3,5,7,1,6};
    unique(arr,10);
    return 0;
}