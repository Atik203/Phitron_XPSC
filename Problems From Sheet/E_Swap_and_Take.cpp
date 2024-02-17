#include <bits/stdc++.h>
using namespace std;
const int MAX = 505;
vector<vector<vector<int>>> dp(MAX, vector<vector<int>>(MAX, vector<int>(MAX, -(int)(1e9))));
int main()
{
    int n;
    cin >> n;
    vector<int> a(n + 5);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<vector<int>> prefix(n + 5, vector<int>(n + 5, 0));
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 0; k <= i; k++)
            {
                if (k)
                {
                    dp[i][j][k] = dp[i - 1][j][k - 1] + a[j];
                }
                if (j >= i)
                {
                    int need = j - i;
                    if (need > k)
                    {
                        continue;
                    }
                    dp[i][j][k] = max(dp[i][j][k], prefix[k - need][j - 1] + a[j]);
                }
            }
        }
        for (int j = 1; j <= n; j++)
        {
            for (int k = 0; k <= i; k++)
            {
                prefix[k][j] = max(prefix[k][j], dp[i][j][k]);
            }
        }
        for (int j = 0; j <= i; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                prefix[j][k] = max(prefix[j][k], prefix[j][k - 1]);
                ans = max(ans, prefix[j][k]);
            }
        }
    }
    cout << ans;
}