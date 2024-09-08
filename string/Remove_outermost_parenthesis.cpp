#include<bits/stdc++.h>
using namespace std;

string solution(string &str){

    string ans="";
    int c=0;
    for(int i=0;i<str.size();i++){
        if(str[i] == '('){
              if(c>0){
                ans += '(';
              }
              c++;
        }
        if(str[i] == ')'){
            if(c>1){
                ans += ')';
            }
            c--;
        }
    }
     return ans;
}

int main(){
    string str;
    cin>>str;

    string ans = solution(str);
    cout<<ans<<endl;
}