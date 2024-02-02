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

const int M = 1e9 + 7;
// const int M=998244353;
long long mod(long long x)
{
    return ((x % M + M) % M);
}

long long mul(long long a, long long b)
{
    return mod(mod(a) * mod(b));
}

ll modPow(ll a, ll b)
{
    if (b == 0)
        return 1LL;
    if (b == 1)
        return a % M;
    ll res = 1;
    while (b)
    {
        if (b % 2 == 1)
            res = mul(res, a);
        a = mul(a, a);
        b = b / 2;
    }
    return res;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<ll> k(n);
    vector<ll> c(m);
    for (int i = 0; i < n; i++)
        cin >> k[i];
    for (int i = 0; i < m; i++)
        cin >> c[i];
    sort(k.begin(), k.end(), greater<>());
    ll total = 0;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (j < m)
        {
            if (c[j] < c[k[i] - 1])
            {
                total += c[j];
                j++;
            }
            else
            {
                total += c[k[i] - 1];
            }
        }
        else
        {
            total += c[k[i] - 1];
        }
    }
    cout << total << "\n";
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
