#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }

    //transpose

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            mat[j][i] = mat[i][j];     //swap(mat[i][j],mat[j][i]);
        }
    }

    //reverse the each row
    for(int i=0;i<n;i++)
    {
        reverse(mat[i].begin(),mat[i].end());
    }

    //printing the matrix

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}