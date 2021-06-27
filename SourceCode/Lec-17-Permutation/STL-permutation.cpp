#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void permute(vector<int> &a)
{
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while( next_permutation(a.begin(),a.end()));
}

int main()
{
    
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i : a)
        cin>>i;
    permute(a);
    for(auto i : ans)
    {
        for(auto j: i)
            cout<<j<<" ";
        cout<<endl;
    }
    return 0;
}