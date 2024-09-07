#include<bits/stdc++.h>
using namespace std;

int solution(vector<int> &v,int n,int k){
    int l=0,r=0;
    int maxi = 0;
    unordered_map<int,int>mpp;
    while(r<n){
        mpp[v[r]]++;
        if(mpp.size() > k){
            mpp[v[l]]--;
            if(mpp[v[l]] == 0) mpp.erase(v[l]);
            l++;
        }
        if(mpp.size()<=k){
            maxi = max(maxi,r-l+1);
        }
        r++;
    }
    return maxi;
}

int main(){
    int n,k;cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int ans = solution(v,n,k);
    cout<<ans;
}