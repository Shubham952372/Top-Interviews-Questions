#include<bits/stdc++.h>
using namespace std;

int solve(string &str1,string &str2)
{
    int n = str1.size();
    int m = str2.size();

    vector<vector<int>>dp(n+1,vector<int>(m+1));

    for(int i=0;i<=n;i++)
    {
        dp[i][0]=0;
    }

    for(int j=0;j<=m;j++)
    {
        dp[0][j]=0;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(str1[i-1] == str2[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    return dp[n][m];
}

int main()
{
    string str1;
    cin>>str1;
    int a = str1.size();
    string str2 = str1;
    reverse(str2.begin(),str2.end());

    int ans = solve(str1,str2);
    cout<<a-ans<<endl;

}