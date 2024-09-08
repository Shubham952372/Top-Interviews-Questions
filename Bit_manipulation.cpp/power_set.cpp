#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    int n = str.size();
     
    vector<string>arr; 
    for(int i=0;i<(1<<n)-1;i++)
    {
        string x = "";
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j)!=0)
            {
                x = x + str[i];
            }
        }
        arr.push_back(x);
    }

    for(string str:arr){
        cout<<str<<" ";
    }
}