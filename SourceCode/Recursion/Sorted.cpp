#include<iostream>
using namespace std;
bool Sorted(int a[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool prevSorted = Sorted(a+1,n-1);
    return (a[0] < a[1] && prevSorted);
}
int main()
{
    int a[] = {1,2,3,4,5,6};
    cout<<Sorted(a,6)<<endl;
    return 0;
}