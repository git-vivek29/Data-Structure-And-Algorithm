#include<iostream>
#define X 2
#define Y 3
#define Z 4
using namespace std;
int main()
{
    //Allocating Memory
    int*** A = new int**[X];
    for(int i=0;i<X;i++)
    {
        A[i] = new int*[Y];
        for(int j=0;j<Y;j++)
        {
            A[i][j] = new int[Z];
        }
    }
    //Asigning values in 3d array
    for(int i=0;i<X;i++)
    {
        for(int j=0;j<Y;j++)
        {
            for(int k=0;k<Z;k++)
            {
                A[i][j][k] = rand()%100;
            }
        }
    }
    //Printing values
    for(int i=0;i<X;i++)
    {
        for(int j=0;j<Y;j++)
        {
            for(int k=0;k<Z;k++)
            {
                cout<<A[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    //Deallocating the memory
    for(int i =0;i<X;i++)
    {
        for(int j =0;j<Y;j++)
        {
            delete[] A[i][j];
        }
         delete[] A[i];
    }
    delete[] A;
    return 0;
}