#include<bits/stdc++.h>
using namespace std;

int ones_count(vector<int> &v)
{
    int n = v.size();
    int maxi = INT_MIN;
    int c = 0;
    for(int i=0;i<n;i++)
    {
        if(v[i] == 1)
        {
            c++;
            maxi = max(maxi,c);
        }
        else{
            c=0;
        }
    }
    return maxi;
}
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int x = ones_count(v);
    cout<<x<<endl;
}