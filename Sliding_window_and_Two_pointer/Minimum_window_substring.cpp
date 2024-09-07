#include<bits/stdc++.h>
using namespace std;

string func(string str,string tar){
    int n = str.size();
    int m = tar.size();
    int l=0,r=0,mini=1e9;
    unordered_map<char,int>mpp;
    int idx=-1,c=0;
    for(int i=0;i<m;i++) mpp[str[i]]++;

    while(r<n){
        if(mpp[str[r]] > 0) c=c+1;
        mpp[str[r]]--;
        while(c == m)
        {
            if(r-l+1 < mini)
            {
                mini = r-l+1;
                idx = l;
            }
            mpp[str[l]]++;
            if(mpp[str[l]] > 0) c = c - 1;
        }
        r++;
    }

    return idx == -1 ? "" : str.substr(idx,mini);
}
int main(){
    string str;
    cin>>str;
    string tar;
    cin>>tar;
    
    string ans = func(str,tar);
    cout<<ans<<endl;

}
