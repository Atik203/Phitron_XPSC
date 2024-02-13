#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define endl '\n'
#define f(i, s, n) for (long long int i = s; i < n; i++)
#define cf(i, s, n) for (long long int i = s; i <= n; i++)
#define rf(i, s, n) for (long long int i = n - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define all(a) sort(a.begin(), a.end())
#define All(a, n) sort(a, a + n);
#define rall(a) sort(a.rbegin(), a.rend())

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> status(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++)
            if (s[j] == '*')
                status[i][j] = 1;
    }
    for (int i = n - 1; i > -1; i--)
    {
        for (int j = 0; j < m; j++)
        {
            if (status[i][j] == 0)
                continue;
            int len = 0;
            while (j > len && j + len + 1 < m && i > len)
            {
                if (status[i - len - 1][j - len - 1] == 0 || status[i - len - 1][j + len + 1] == 0)
                    break;
                len++;
            }
            if (len >= k)
            {
                for (int d = 0; d <= len; d++)
                {
                    status[i - d][j - d] = 2;
                    status[i - d][j + d] = 2;
                }
            }
        }
    }
    bool ok = true;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (status[i][j] == 1)
                ok = false;

    cout << (ok ? "YES" : "NO") << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
