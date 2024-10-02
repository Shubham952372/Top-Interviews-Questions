#include<bits/stdc++.h>
using namespace std;
int solution(string &str,string &t)
{
    int n = str.size();
    int m = t.size();

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
            if(str[i-1] == t[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }else{
                dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}

int main()
{
    string str;
    cin>>str;

    string t = str;
    reverse(t.begin(),t.end());
    int ans = solution(str,t);
    cout<<ans<<endl;
}

