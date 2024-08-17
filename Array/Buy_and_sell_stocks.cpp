#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int mini = v[0];
    int maxi_profit = INT_MIN;

    for(int i=0;i<n;i++)
    {
        int cost = v[i] - mini;
        maxi_profit = max(maxi_profit,cost);
        mini = min(mini,v[i]);

    }

    cout<<maxi_profit<<endl;
}