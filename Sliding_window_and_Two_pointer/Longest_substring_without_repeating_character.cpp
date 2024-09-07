#include<bits/stdc++.h>
using namespace std;

int solution(string str){
    int n = str.size();
    int l=0,r=0;
    int maxi = 0;
    int hash[256]={-1};
    while(r<n){
        if(hash[str[r]]!=-1){
            if(hash[str[r]] >= l){
                l=hash[str[r]]+1;
            }
        }
        maxi=max(maxi,r-l+1);
        hash[str[r]]=r;
        r++;
    }

     return maxi;
}

int main(){
    string str;
    cin>>str;

    int ans = solution(str);
    cout<<ans;
}
