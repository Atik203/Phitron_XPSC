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
#define sz(a) (int)a.size()
ll calc(vector<int> &a)
{
    ll zeroes = 0, ans = 0;
    for (int i = sz(a) - 1; i >= 0; --i)
    {
        if (a[i] == 0)
            ++zeroes;
        else
            ans += zeroes;
    }
    return ans;
}
void solve()
{
    int n;
    cin >> n;
    vi a(n);
    f(i, 0, n)
    {
        cin >> a[i];
    }
    ll ans = calc(a);
    f(i, 0, n)
    {
        if (a[i] == 0)
        {
            a[i] = 1;
            ans = max(ans, calc(a));
            a[i] = 0;
            break;
        }
    }
    for (int i = n - 1; i >= 0; --i)
    {
        if (a[i] == 1)
        {
            a[i] = 0;
            ans = max(ans, calc(a));
            a[i] = 1;
            break;
        }
    }
    cout << ans << endl;
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
