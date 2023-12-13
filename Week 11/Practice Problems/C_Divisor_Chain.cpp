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
#define sz(a) (int)(a).size()
bool bit(int mask, int pos)
{
    return (mask >> pos) & 1;
}
void solve()
{
    int x;
    cin >> x;
    int p;
    vi ans;
    ans.pb(x);
    for (int i = 0;; ++i)
    {
        if (bit(x, i))
        {
            if (x == (1 << i))
            {
                p = i;
                break;
            }
            x -= (1 << i);
            ans.pb(x);
        }
    }
    while (p > 0)
    {
        x -= (1 << (p - 1));
        ans.pb(x);
        --p;
    }
    cout << sz(ans) << endl;
    for (int y : ans)
    {
        cout << y << " ";
    }
    cout << endl;
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