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
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    int ans = 0;
    for (int len = 1; len <= min(n, m); len++)
    {
        for (int i = 0; i + len <= n; i++)
        {
            for (int j = 0; j + len <= m; j++)
            {
                if (a.substr(i, len) == b.substr(j, len))
                {
                    ans = max(ans, len);
                }
            }
        }
    }
    cout << a.size() + b.size() - 2 * ans << "\n";
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
