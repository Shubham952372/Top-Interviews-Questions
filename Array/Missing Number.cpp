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

    int sum = n*(n+1)/2;

    int x = 0;
    for(int i=0;i<n;i++)
    {
        x = x+v[i];
    }

    cout<<sum - x<<endl;
}