#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    //we will solve this question using two pointer concept

    long long sum = 0;
    int maxi = INT_MIN;

    int l=0,r=0;
    while(r<n)
    {
        sum += v[r];
        if(sum > k && l<=r)
        {
            sum -= v[l];
            l++;
        }
        else if(sum == k)
        {
            maxi = max(maxi,r-l+1);
        }
        r++;
    }

    cout<<maxi<<endl;
}
