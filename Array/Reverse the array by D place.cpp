#include<bits/stdc++.h>
using namespace std;

vector<int> shift(vector<int> &v,int d)
{
    int n = v.size();
    int d = d % n;

    reverse(v.begin(),v.begin()+d);
    reverse(v.begin()+d,v.end());
    reverse(v.begin(),v.end());

    return v;
}

int main()
{
    int n,d;cin>>n>>d;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    vector<int> x = shift(v,d);

    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}