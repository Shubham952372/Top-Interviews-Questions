#include<bits/stdc++.h>
using namespace std;

//in coding we will use function
//int lb = lower_bound(arr.begin(),arr.end(),ele)-arr.begin();
//it is just similar to lower bound problem

int solution(vector<int> &arr,int n,int tar){
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] >= tar){
            ans = mid; 
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    return ans;
}
int main(){
    int n,tar;cin>>n>>tar;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int ans = solution(v,n,tar);
    cout<<ans<<endl;
}