#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    vector<int>v1(n),v2(m);

    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
    }

    vector<int>ans;
    int i=0,j=0;
    while(i < n && j < m)
    {
        if(v1[i] < v2[j])
        {
            ans.push_back(v1[i]);
            i++;
        }
        else if(v1[i] > v2[j])
        {
            ans.push_back(v2[j]);
            j++;
        }
        else{
            ans.push_back(v1[i]);
            i++;j++;
        }
    }

    while(i<n)
    {
        ans.push_back(v1[i]);
        i++;
    }
    while(j<m)
    {
        ans.push_back(v2[j]);
        j++;
    }

    //print the union array
    for(int i=0;i<n+m;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
