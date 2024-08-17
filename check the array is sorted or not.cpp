#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &v,int n)
{
    for(int i=1;i<n;i++)
    {
        if(v[i-1] > v[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    bool x = check(v,n);
    cout<<x<<endl;
}