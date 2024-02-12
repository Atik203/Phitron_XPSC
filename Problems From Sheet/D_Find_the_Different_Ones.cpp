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

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    vector<int> p(n, -1);
    for (int i = 1; i < n; ++i)
    {
        p[i] = p[i - 1];
        if (a[i] != a[i - 1])
        {
            p[i] = i - 1;
        }
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; ++i)
    {
        int l, r;
        cin >> l >> r;
        l -= 1;
        r -= 1;

        if (p[r] < l)
        {
            cout << "-1 -1" << endl;
        }
        else
        {
            cout << p[r] + 1 << " " << r + 1 << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        solve();
        if (i + 1 != t)
        {
            cout << endl;
        }
    }
    return 0;
}
