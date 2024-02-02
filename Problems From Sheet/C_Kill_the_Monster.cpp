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
    ll h1, a1;
    cin >> h1 >> a1;
    ll h2, a2;
    cin >> h2 >> a2;
    ll k, w, a;
    cin >> k >> w >> a;
    int ans = 0;
    for (int i = 0; i <= k; i++)
    {
        ll h3 = h1 + (i * a);
        ll a3 = a1 + (w * (k - i));
        ll x, y;
        x = (h2 / a3);
        if (h2 % a3 != 0)
            x++;
        y = h3 / a2;
        if (h3 % a2 != 0)
            y++;
        if (x <= y)
        {
            ans = 1;
            break;
        }
    }
    if (ans == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
