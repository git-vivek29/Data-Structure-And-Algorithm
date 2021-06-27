#include<iostream>
using namespace std;
/*Problem:
https://youtu.be/MiJdgxTWaFs?list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&t=127
*/
int getBit(int n,int p)
{
    return ((n&(1<<p))!=0);
}
int setBit(int n,int p)
{
    return ((1<<p) | n);
}
int clearBit(int n,int p)
{
    int mask = 1<<p;
    mask = ~mask;
    return (mask&n);
}
int updateBit(int n,int p,int value)
{
    int mask = ~(1<<p);
    n = n & mask;
    return (n | (value<<p));
    
}
int main()  
{
    //cout<<getBit(5,2);
    //cout<<setBit(5,1);
    //cout<<clearBit(5,2);
    cout<<updateBit(5,1,1);
    return 0;
}