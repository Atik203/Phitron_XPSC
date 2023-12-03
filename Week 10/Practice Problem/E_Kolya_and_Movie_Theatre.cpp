#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<ll, ll>
#define pll pair<long long, long long>
#define vi vector<ll>
#define vll vector<long long>
#define mii map<ll, ll>
#define si set<ll>
#define sc set<char>
#define endl '\n'
#define f(i, s, n) for (long long ll i = s; i < n; i++)
#define cf(i, s, n) for (long long ll i = s; i <= n; i++)
#define rf(i, n, s) for (long long ll i = e - 1; i >= n; i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, d;
        cin >> n >> m >> d;
        vector<ll> a(n);
        for (ll i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        ll ans = 0;
        set<pair<ll, ll>> s;
        ll sum = 0;
        for (ll i = 0; i < n; ++i)
        {
            ll cur = sum + a[i] - d * (i + 1);
            ans = max(ans, cur);
            if (a[i] > 0)
            {
                s.insert({a[i], i});
                sum += a[i];
                if (s.size() >= m)
                {
                    sum -= (s.begin()->first);
                    s.erase(s.begin());
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}
