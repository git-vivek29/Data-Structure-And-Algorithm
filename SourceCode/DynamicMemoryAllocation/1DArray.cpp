#include<bits/stdc++.h>
#define N 10
using namespace std;
int main()
{   
    //Allocating memory to array
    int* a = new int[N];
    
    //Assigning values
    for(int i =0;i<N;i++)
    {
        a[i] = i+1; // or *(a+i)
    }
    
    //Printing Values
    for(int i =0; i<N; i++)
    {
        cout<<a[i]<<endl;// or *(a+i)
    }
    
    delete[] a;
    a = new int();
    *a= 11;
    cout<<*a;
    delete(a);
    return 0;
}