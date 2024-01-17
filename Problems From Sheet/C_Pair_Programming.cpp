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
    int k, n, m;
    cin >> k >> n >> m;

    vi a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int pos1 = 0, pos2 = 0;
    vi res;
    bool ok = true;
    while (pos1 != n || pos2 != m)
    {
        if (pos1 != n && a[pos1] == 0)
        {
            res.push_back(0);
            k++;
            pos1++;
        }
        else if (pos2 != m && b[pos2] == 0)
        {
            res.push_back(0);
            k++;
            pos2++;
        }
        else if (pos1 != n && a[pos1] <= k)
        {
            res.push_back(a[pos1++]);
        }
        else if (pos2 != m && b[pos2] <= k)
        {
            res.push_back(b[pos2++]);
        }
        else
        {
            cout << -1 << '\n';
            ok = false;
            break;
        }
    }

    if (ok)
    {
        for (int cur : res)
            cout << cur << ' ';
        cout << endl;
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
