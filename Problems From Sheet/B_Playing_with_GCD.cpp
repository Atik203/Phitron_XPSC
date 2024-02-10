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

ll lcm(ll a, ll b)
{
    ll g = __gcd(a, b);
    return (a * b / g);
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 2, 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b(n + 2, 1);
    for (ll i = 1; i <= n + 1; i++)
    {
        b[i] = lcm(a[i], a[i - 1]);
    }
    for (ll i = 1; i <= n; i++)
    {
        if (__gcd(b[i], b[i + 1]) != a[i])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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
