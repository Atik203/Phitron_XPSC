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
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    vector<ll> v1;
    ll zero = 0, temp = 0;
    f(i, 0, n)
    {
        if (s[i] != '0')
            temp = -1;
        else
        {
            zero++;
            v1.push_back(i - v1.size());
        }
    }

    vector<ll> v2(n, 0);

    for (int i = 0; i < v1.size(); i++)
    {
        if (i <= 0)
        {
            v2[i] = v1[i];
        }
        else
        {
            v2[i] = v1[i] + v2[i - 1];
        }
    }
    int p = 1;
    bool ok = p <= n;
    while (ok)
    {
        if (zero >= p)
            cout << v2[p - 1] << " ";
        else
            cout << -1 << " ";
        p++;
        ok = p <= n;
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
