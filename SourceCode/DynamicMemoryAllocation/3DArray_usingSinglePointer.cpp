#include<iostream>
#define X 2
#define Y 3
#define Z 4
using namespace std;
int main()
{
    //Allocating memory for 3d array
    int* A = new int[X*Y*Z];
    //Assigning values in 3D array
    for(int i = 0;i<X;i++)
    {
        for(int j=0;j<Y;j++)
        {
            for(int k =0;k<Z;k++)
            {
                A[i*Y*Z+j*Z+k] = rand() % 100;
            }
        }
    }
    
    //Printing values 
    for(int i = 0;i<X;i++)
    {
        for(int j=0;j<Y;j++)
        {
            for(int k =0;k<Z;k++)
            {
                cout<<A[i*Y*Z+j*Z+k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    delete[] A;
    return 0;
}