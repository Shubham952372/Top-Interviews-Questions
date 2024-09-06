#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> solve(vector<int>&arr,int n)
{
    set<vector<int>>st;
    for(int i=0;i<n;i++)
    {
        set<int>hashset;
        for(int j=i+1;j<n;j++)
        {
            int third = -(arr[i]+arr[j]);
            if(hashset.find(third)!=hashset.end())
            {
                vector<int>temp = {arr[i],arr[j],third};
                sort(temp.begin(),temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<vector<int>> ans = solve(arr,n);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
   
}