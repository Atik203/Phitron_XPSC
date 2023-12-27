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
bool check(string s, char c, char alt)
{
    vector<int> v;
    int sz = s.size();
    for (int i = 0; i < sz - 1; i++)
    {
        if (s[i] != c)
        {
            s[i] = c;
            s[i + 1] = (s[i + 1] == alt ? c : alt);
            v.emplace_back(i + 1);
        }
    }
    for (int i = 1; i < sz; i++)
    {
        if (s[i] != s[i - 1])
        {
            return false;
        }
    }
    cout << v.size() << endl;
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << endl;
    return true;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (check(s, 'W', 'B'))
    {
        return;
    }
    else if (check(s, 'B', 'W'))
    {
        return;
    }
    else
        cout << -1 << endl;
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
