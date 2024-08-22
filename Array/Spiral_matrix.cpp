#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    
    vector<int>ans;
    int t = 0,l=0,r=m-1,d=n-1;
    
    while(l<=r && t<=d)
    {
       
            for(int i=l;i<=r;i++)
            {
               ans.push_back(mat[t][i]); 
            }
            t++;

        
            for(int i=t;i<=d;i++)
            {
               ans.push_back(mat[i][r]); 
            }
            r--;
        
         if(t<=d)
        {
            for(int i=r;i>=l;i--)
            {
               ans.push_back(mat[d][i]); 
            }
            d--;
        }
         if(l<=r)
        {
            for(int i=d;i>=t;i--)
            {
               ans.push_back(mat[i][l]); 
            }
            
        }
        l++;
    
    }
    
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}