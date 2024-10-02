#include<bits/stdc++.h>
using namespace std;

string print(string &str1, string &str2)
{
    int n = str1.size();
    int m = str2.size();

    // Create a DP table to store the lengths of LCS.
    vector<vector<int>> dp(n+1, vector<int>(m+1, 0));

    // Fill the DP table.
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(str1[i-1] == str2[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    // Reconstruct the LCS from the DP table.
    int i = n, j = m;
    string ans = "";

    while(i > 0 && j > 0)
    {
        if(str1[i-1] == str2[j-1])
        {
            ans += str1[i-1];
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1])
        {
            i--;
        }
        else
        {
            j--;
        }
    }

    // The constructed string is in reverse order, so reverse it.
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string str1, str2;
    cin >> str1 >> str2;

    cout << print(str1, str2) << endl;
}
