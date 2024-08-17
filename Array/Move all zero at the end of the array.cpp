#include<bits/stdc++.h>
using namespace std;

vector<int> zeros(vector<int> &v)
{
    int n = v.size();
    int j=-1;
    for(int i=0;i<n;i++)
    {
        if(v[i] == 0)
        {
            j=i;
            break;
        }
    }

    for(int i=j+1;i<n;i++)
    {
        if(v[i]!=0)
        {
            swap(v[i],v[j]);
            j++;
        }
    }
    return v;
}

int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    vector<int>x = zeros(v);

    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }
}