#include<bits/stdc++.h>
using namespace std;

int solution(vector<int>&arr,int n,int k){

    int l=0,r=0;
    int sum=0,maxi=0;
    while(r<n){
        sum+=arr[r];
        if(sum>k)
        {
            sum = sum-arr[l];
            l++;
        }
        if(sum<=k){
            maxi = max(maxi,r-l+1);
        }
        r++;
    }
    return maxi;
}

int main(){
    int n,k;cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = solution(arr,n,k);
    cout<<ans<<endl;
}