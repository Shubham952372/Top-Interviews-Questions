#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int sum = 0;
    int max_sum = INT_MIN;
    for(auto it : v)
    {
        sum += it;
        max_sum = max(max_sum,sum);
        if(sum < 0)
        {
            sum = 0;
        }
        
    }

    cout<<max_sum<<endl;
}