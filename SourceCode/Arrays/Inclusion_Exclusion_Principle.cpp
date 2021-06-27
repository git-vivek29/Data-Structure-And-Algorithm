#include<iostream>
using namespace std;
int Divisible(int n,int a,int b)
{
    int n1,n2,n3;
    n1=n/a;
    n2 = n /b;
    n3 = n/(a*b);
    return n1+n2-n3;
}
int main()
{
    int n,a,b;
    cin>> n>>a>>b;
    cout<<Divisible(n,a,b)<<endl;
    return 0;
}