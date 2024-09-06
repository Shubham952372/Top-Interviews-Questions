#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cin>>sum;

    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++) mpp[arr[i]]++;

    for(int i=0;i<n;i++)
    {
        if(mpp.find(sum-arr[i])!=mpp.end()  && mpp[arr[i]] > 0 && mpp[sum-arr[i]] > 0)
        {
            cout<<arr[i]<<" "<<sum-arr[i]<<endl;
            mpp[arr[i]]--;
            mpp[sum-arr[i]]--;
        }
    }
}