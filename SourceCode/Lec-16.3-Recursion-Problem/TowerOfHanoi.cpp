#include<iostream>
using namespace std;
void TOH(int n,char src,char dest,char helper)
{
    if(n==0)
    {
        return;
    }
    TOH(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    TOH(n-1,helper,dest,src);
}
int main()
{
    TOH(3,'A','C','B');
    return 0;
}