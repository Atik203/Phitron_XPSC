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
    for (int j = 0; j < n; j++)
        cin >> a[j];
    int mn = 0, mx = int(1e9);
    for (int j = 0; j + 1 < n; j++)
    {
        int x = a[j];
        int y = a[j + 1];
        int midL = (x + y) / 2;
        int midR = (x + y + 1) / 2;
        if (x < y)
            mx = min(mx, midL);
        if (x > y)
            mn = max(mn, midR);
    }
    if (mn <= mx)
        cout << mn << endl;
    else
        cout << -1 << endl;
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
