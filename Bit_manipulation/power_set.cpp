#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int n = str.size();
    
    vector<string> arr; 
    for(int i = 0; i < (1 << n); i++) { 
        string x = "";
        for(int j = 0; j < n; j++) {
            if((i & (1 << j)) != 0) { 
                x = x + str[j]; 
            }
        }
        arr.push_back(x);
    }

    for(string s : arr){ 
        cout << s << " ";
    }

    return 0;
}
