#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
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
ll i, n, k, a[100001], b[100001];
ll fnd(ll val)
{
    ll m = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] * val > b[i])
            m += val * a[i] - b[i];
    }
    if (m > k)
    {
        return 0;
    }
    return 1;
}
void solve()
{
    cin >> n >> k;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        cin >> b[i];
    ll low, mid, high, ans = 0;
    low = 0;
    high = 200000000000;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (fnd(mid))
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
