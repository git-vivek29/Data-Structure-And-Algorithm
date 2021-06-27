#include<iostream>
using namespace std;
void inc(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    inc(n-1);
}
void dec(int n)
{
    if(n==0)
    {
        return;
    }
    dec(n-1);
    cout<<n<<endl;
}
int main()
{  
    inc(6);
    dec(6);
    return 0;
}