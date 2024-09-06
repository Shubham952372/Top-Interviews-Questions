#include<bits/stdc++.h>
using namespace std;

bool solution(vector<int>&arr,int n,int tar)
{
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == tar) return true;
        else if(arr[mid] < tar){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    if(solution){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }
}