#include<bits/stdc++.h>
using namespace std;

int solution(string str,int k){
     int l=0,r=0;
     int maxi=0,maxf=0;
     unordered_map<char,int>mpp;
     while(r<str.size()){
        mpp[str[r]]++;
        maxf = max(maxf,mpp[str[r]]);
        int change = (r-l+1)-maxf;
        if(change > k){
            mpp[str[l]]--;
            l++;
        }
        if(change < k){
            maxi = max(maxi,r-l+1);
        }
        r++;
     }
}

int main(){
    string str;
    cin>>str;
    int k;cin>>k;

    int ans = solution(str,k);
    cout<<ans;
}