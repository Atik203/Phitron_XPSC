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
    string s;
    cin >> n >> s;
    int ans = 1e9;
    for (int i = 0; i < n; i++)
    {
        vector<int> v(3, 0);
        v[s[i] - 'a']++;
        for (int j = i + 1; j < min(n, i + 7); j++)
        {
            v[s[j] - 'a']++;
            if (v[0] > v[1] && v[0] > v[2])
                ans = min(ans, j - i + 1);
        }
    }
    if (ans == 1e9)
        ans = -1;
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
