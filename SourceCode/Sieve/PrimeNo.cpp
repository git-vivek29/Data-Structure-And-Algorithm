#include<iostream>
using namespace std;
void prime(int n)
{
    int prime[100] = {0};
    for(int i=2;i<=n;i++)
    {
        for(int j= i*i;j<=n; j = j+i)
        {
            if(prime[j] == 0)
            {
                prime[j] = 1;
            }
        }
    }
    for(int i =2;i<=n;i++)
    {
        if(prime[i] == 0)
        {
            cout<<i<<endl;
        }
    }
    
}
int main()
{
    int n = 50;
    prime(n);
    return 0;
}