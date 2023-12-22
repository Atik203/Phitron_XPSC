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
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int &x : v)
        cin >> x;

    all(v);
    int med = n / 2;

    ll ans = v[med];

    ll low = 0, high = 1e18 + 90;
    while (low <= high)
    {
        ll mid = low + ((high - low) >> 1);

        ll sum = 0;
        for (int i = med; i < n; i++)
        {
            if (v[i] <= mid)
                sum += (mid - v[i]);
            if (sum > k)
                break;
        }

        if (sum <= k)
        {
            ans = max(ans, mid);
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
