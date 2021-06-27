#include<iostream>
#define M 4
#define N 3
using namespace std;
int main()
{
    // creating pointer array of size M
    int** A = new int*[M];
    
    // Creating pointer of each pointer in M
    for(int  i =0;i<M;i++)
    {
        A[i] = new int[N];
    }
    
    // Assigning values in array
    for(int i=0;i<M;i++)
    {
        for(int j =0;j<N;j++)
        {
            A[i][j] = rand() % 100;
        }
    }
    
    //printing values
    for(int i=0;i<M;i++)
    {
        for(int j =0;j<N;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    //deallocating memory
    for(int i =0;i<M;i++)
    {
        delete[] A[i];
    }
    delete[] A;
    return 0;
}