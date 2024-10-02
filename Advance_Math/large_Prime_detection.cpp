#include <bits/stdc++.h>
using namespace std;

bool check(long long int n){
    if(n<2) return false;
    if(n==2 || n== 3) return true;
    if(n%2 == 0 || n%3 == 0) return false;
    for(long long i = 5;i<=sqrt(n);i+= 6){
        if(n%i == 0 ) return false;
    }
    return true;
} 

int main(){
    long long int n;cin>>n;
    cout<<check(n);
}