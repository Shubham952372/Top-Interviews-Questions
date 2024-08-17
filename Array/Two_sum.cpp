#include<bits/stdc++.h>
using namespace std;

bool fun(vector<int> &v,int tar)
{
    int n = v.size();
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        int a = v[i];
        int x = tar - a;
        if(mpp.find(x)!=mpp.end())
        {
            return true;
        }
        mpp[a] = i;
    }
    return true;
}

int main()
{
    int n,tar;cin>>n>>tar;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    
    bool ans = fun(v,tar);
    cout<<ans<<endl;
}