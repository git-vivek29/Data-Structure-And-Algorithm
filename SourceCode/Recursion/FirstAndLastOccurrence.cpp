#include<iostream>
using namespace std;
int FirstOccur(int a[],int n,int i,int key)
{
    if(i == n)
    {
        return -1;
    }
    if(a[i] == key)
    {
        return i;
    }
    return FirstOccur(a,n,i+1,key);   
}
int LastOccur(int a[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    int restArray = LastOccur(a,n,i+1,key);
    if(restArray != -1)
    {
        return restArray;
    }
    if( a[i] == key)
    {
        return i;
    }
    return -1;
}
int main()
{  
    int a[] = {1,4,2,3,4,5,6,6};
    cout<<FirstOccur(a,8,0,6)<<endl;
    cout<<LastOccur(a,8,0,10)<<endl;
    return 0;
}