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
#define rf(i, n, s) for (long long int i = e - 1; i >= n; i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {

        ll n, k;
        cin >> n >> k;
        ll arr[n];
        f(i, 0, n) cin >> arr[i];
        vector<ll> v, w;
        f(i, 0, n)
        {
            if (arr[i] < 0)
                w.pb(arr[i] * (-1));
            else if (arr[i] > 0)
                v.pb(arr[i]);
        }
        sort(v.begin(), v.end());
        sort(w.begin(), w.end());
        ll ans = 0, a = 0, b = 0;
        if (v.empty() == false)
        {
            if (v.size() < k)
            {
                a = v[v.size() - 1];
                ans += a;
            }
            else
            {
                a = v[v.size() - 1];
                f(i, 0, v.size())
                {
                    if (i == v.size() - 1)
                    {
                        ans += v[i];
                    }
                    else if ((v.size() - i - 1) % k == 0)
                    {
                        ans += v[i] * 2;
                    }
                }
            }
        }
        if (w.empty() == false)
        {
            if (w.size() < k)
            {
                b = w[w.size() - 1];
                ans += b;
            }
            else
            {
                b = w[w.size() - 1];
                f(i, 0, w.size())
                {
                    if (i == w.size() - 1)
                    {
                        ans += w[i];
                    }
                    else if ((w.size() - i - 1) % k == 0)
                    {
                        ans += w[i] * 2;
                    }
                }
            }
        }
        ans += min(a, b);
        cout << ans << endl;
    }
    return 0;
}
