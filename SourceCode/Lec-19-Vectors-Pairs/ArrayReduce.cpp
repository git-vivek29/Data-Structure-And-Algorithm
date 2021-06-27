#include<iostream>
#include<vector>
using namespace std;
bool sortByFirst(pair<int,int> p1, pair<int,int> p2)
{
    return (p1.first < p2.first);
}
int main()
{
    vector<pair<int,int>> v;
    int arr[] = {10,16,7,14,5,3,12,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++)
    {
        v.push_back(make_pair(arr[i],i));
    }
    
    sort(v.begin(),v.end(),sortByFirst);
    for(int i = 0;i<n;i++)
    {
        arr[v[i].second] = i;
    }
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}