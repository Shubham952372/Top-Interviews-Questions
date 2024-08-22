#include<bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> &v,int n)
{

    int lead = v[n-1];
    vector<int>arr;
    arr.push_back(lead);
    for(int i=n-2;i>=0;i--)
    {
        if(v[i] > lead)
        {
            lead = v[i];
            arr.push_back(lead);
        }
    }
    reverse(arr.begin(),arr.end());
    return arr;
}
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    vector<int> ans = solution(v,n);

    for(int i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}