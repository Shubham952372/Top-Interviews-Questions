#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>arr,int n,int goal){
    int l=0,r=0,sum=0,cnt=0;
    while(r<n){
        sum += arr[r];
        while(sum>goal){
            sum=sum-arr[l];
            l++;
        }
        if(sum<=goal){
            cnt = cnt + (r-l+1); 
        }
        r++;
    }
    return cnt;
}

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {cin>>arr[i];}
    int goal;cin>>goal;

    int ans = solve(arr,n,goal) - solve(arr,n,goal-1);
    cout<<ans;
}