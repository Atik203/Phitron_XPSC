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
    int n;
    cin >> n;
    vi count(n + 1);
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        ++count[x];
    }
    int ans = 0;
    for (int s = 2; s <= 2 * n; ++s)
    {
        int cur = 0;
        for (int i = 1; i < (s + 1) / 2; ++i)
        {
            if (s - i > n)
                continue;
            cur += min(count[i], count[s - i]);
        }
        if (s % 2 == 0)
            cur += count[s / 2] / 2;
        ans = max(ans, cur);
    }
    cout << ans << endl;
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
