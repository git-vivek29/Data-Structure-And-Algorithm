#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,key;
    cin>>n>>m>>key;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    
    // Searching in 2D array
    int c = m-1,r=0;
    bool flag = false;
    while(r<n && c>=0)
    {
        if(arr[r][c] == key)
            flag = true;
        if(arr[r][c] > key)
            c--;
        else
            r++;
    }
   if(flag == true)
       cout<<"Element Found"<<endl;
    else
        cout<<"Element No found"<<endl;
    return 0;
}