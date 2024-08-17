#include<bits/stdc++.h>
using namespace std;

vector<int> remove(vector<int> &v)
{
    //using two pointer concept
    int n = v.size();

    if(n == 0) return v;
    int i = 0;
     for(int j=1;i<n;i++)
     {
         if(v[i] != v[j])
         {
            v[i++] = v[j];
         }
     }
     v.resize(i+1);
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

    vector<int> x = remove(v);

    for(int i=0;i<x.size();i++)
    {
        cout<<x[i]<<" ";
    }
    cout<<endl;
}
