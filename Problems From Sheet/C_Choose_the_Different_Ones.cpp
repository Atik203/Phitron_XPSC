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
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> b(m);
    for (int i = 0; i < m; ++i)
    {
        cin >> b[i];
    }

    vector<int> cnt(k + 1, 0);

    for (int e : a)
    {
        if (e <= k)
        {
            cnt[e] |= 1;
        }
    }

    for (int e : b)
    {
        if (e <= k)
        {
            cnt[e] |= 2;
        }
    }

    vector<int> c(4, 0);

    for (int e : cnt)
    {
        c[e] += 1;
    }

    if (c[1] > k / 2 || c[2] > k / 2 || c[1] + c[2] + c[3] != k)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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
