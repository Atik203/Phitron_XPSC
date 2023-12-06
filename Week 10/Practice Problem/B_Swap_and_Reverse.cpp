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
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<char> odd, even;
    for (int i = 0; i < n; ++i)
    {
        if (i % 2 == 0)
        {
            even.pb(s[i]);
        }
        else
        {
            odd.pb(s[i]);
        }
    }
    all(even);
    all(odd);
    string ans1 = "";
    for (int i = 0, j = 0; i < sz(even) || j < sz(odd); ++i, ++j)
    {
        if (i < sz(even))
        {
            ans1 += even[i];
        }
        if (j < sz(odd))
        {
            ans1 += odd[i];
        }
    }
    if (k % 2 == 0)
    {
        all(s);
        cout << s << endl;
        return;
    }
    cout << ans1 << endl;
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
