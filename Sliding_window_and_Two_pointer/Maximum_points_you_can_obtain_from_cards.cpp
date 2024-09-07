#include<bits/stdc++.h>
using namespace std;

int solution(vector<int>&arr,int n,int k){
    int lsum=0;int rsum = 0;
    for(int i=0;i<k;i++) lsum+=arr[i];
    int maxi=lsum;
    int r=n-1;
    for(int i=k-1;i>=0;i--)
    {
        lsum -= arr[i];
        rsum+=arr[r];
        r--;
        maxi = max(maxi,lsum+rsum);
    }
    return maxi;
}

int main(){
    
    int n,k;cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int ans = solution(arr,n,k);
    cout<<ans<<endl;
}