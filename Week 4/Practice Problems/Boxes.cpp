#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define V vector<long long int>
#define pb push_back
#define pi pair<long long int, long long int>
#define forl(var, str, end) for (long long int var = str; var < end; var++)

ll mod = 1000000007;

ll binexp(ll a, ll n)
{
    if (n < 0)
        return 0;
    a %= mod;
    ll res = 1;
    while (n)
    {
        if (n & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        n >>= 1;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        V a(n);
        forl(i, 0, n)
                cin >>
            a[i];
        ll ans = 1;
        sort(a.rbegin(), a.rend());
        ll xoro = a[0];
        ll i = 0;
        ll j = n - 1;
        while (i < j)
        {
            if ((xoro) >= a[j])
            {
                xoro = (xoro ^ a[j]);
                j--;
            }
            else
            {
                ans++;
                xoro = a[i];
                i++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
