#include<bits/stdc++.h>
using namespace std;
int countSteps(int s,int e)
{
    if(s == e)
    {
        return 1;
    }
    if(s > e)
    {
        return 0;
    }
    int count = 0;
    for(int i = 1; i<=min(6,e);i++)
    {
        count = count + countSteps(s+i,e);
    }
    return count;
}
int main()
{
    cout<<countSteps(0,3);
    return 0;
}