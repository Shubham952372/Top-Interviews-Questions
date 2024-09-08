#include<bits/stdc++.h>
using namespace std;

bool solution(string &str){

    stack<char>st;
    for(int i=0;i<str.size();i++){
        if(str[i] == '(' ||str[i] == '{'||str[i] == '[')
        {
            st.push(str[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            char ch = st.top();
            st.pop();
            if(str[i] == ')' && ch == '(' || str[i] == '}' && ch == '{' || str[i] == ']' && ch == '['){

            }else{
                return false;
            }
        }
    }
    if(st.empty())
    {
        return true;
    }else{
        return false;
    }

}

int main(){
    string str;
    cin>>str;

    bool ans = solution(str);
    if(ans){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }

   
}

