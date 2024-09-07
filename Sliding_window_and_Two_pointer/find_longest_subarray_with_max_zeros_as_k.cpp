#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&v,int n,int k){
    int l=0,r=0;
    int maxi = 0,z=0;
    while(r<n){
        if(v[r]==0)
        {
             z++;
        }
        if(z>k)
        {
           if(v[l]==0) z--;
            l++;
        }
        if(z<=k){
            maxi = max(maxi,r-l+1);
        }
        r++;
    }
    return maxi;
}

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int ans = solve(v,n,k);
    cout<<ans<<endl;
    
}