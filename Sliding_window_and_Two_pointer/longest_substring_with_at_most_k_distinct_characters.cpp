#include<bits/stdc++.h>
using namespace std;

int solve(string str,int k){
    int l=0,r=0;
    int maxi=0;
    unordered_map<char,int>mpp;
    while(r<str.size()){
        mpp[str[r]]++;
        if(mpp.size() > k){
            mpp[str[l]]--;
            if(mpp[str[l]] == 0) mpp.erase(str[l]);
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
    string str;
    cin>>str;
    int k;
    cin>>k;

    int ans = solve(str,k);
    cout<<ans<<endl;
}