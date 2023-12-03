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
        ll n;
        cin >> n;
        ll l = 0, r = min<ll>(2e9, 2 * n);
        while (r - l > 1)
        {
            ll m = (l + r) >> 1;
            // m = x + y, answer = x + 2 * y
            if (m * (m - 1) / 2 + m < n)
            {
                l = m;
            }
            else
            {
                r = m;
            }
        }
        ll y = n - r * (r - 1) / 2;
        if ((r + 1) * r / 2 <= n)
        {
            cout << min(r + y, r + 1 + n - (r + 1) * r / 2) << "\n";
        }
        else
        {
            cout << r + y << "\n";
        }
    }
    return 0;
}
