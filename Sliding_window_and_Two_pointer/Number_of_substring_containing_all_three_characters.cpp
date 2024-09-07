#include<bits/stdc++.h>
using namespace std;

int solution(string str){
    int arr[3]={-1,-1,-1};
    int cnt=0;
    for(int i=0;i<str.size();i++){
        arr[str[i]-'a']=i;
        if(arr[0]!=-1 && arr[1]!=-1 &&arr[2]!=-1){
            cnt = cnt + (1 + min(arr[0],min(arr[1],arr[2])));
        }
    }
    return cnt;
}

int main(){
    string str;
    cin>>str;

    int ans = solution(str);
    cout<<ans;
}