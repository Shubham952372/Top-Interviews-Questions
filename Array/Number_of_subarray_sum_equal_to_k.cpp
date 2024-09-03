#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    unordered_map<int,int>mpp;
    mpp[0]=1;
    int sum = 0;
    int cnt = 0;
    for(int i=0;i<n;i++)
    {
        sum += v[i];
        int remove = sum - k;
        cnt += mpp[remove];
        mpp[sum]++;

    }
    cout<<cnt<<endl;
}