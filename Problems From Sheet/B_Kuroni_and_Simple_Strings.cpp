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
    string s;
    cin >> s;
    vector<int> le, ri;
    int l = 0, r = s.size() - 1;
    while (l < r)
    {
        while (l < s.size() && s[l] == ')')
            l++;
        while (r >= 0 && s[r] == '(')
            r--;
        if (l < s.size() && r >= 0 && l < r)
        {
            le.push_back(l + 1);
            ri.push_back(r + 1);
            l++;
            r--;
        }
    }
    if (le.empty())
    {
        cout << "0\n";
        return;
    }
    cout << "1\n";
    cout << 2 * le.size() << '\n';
    for (auto x : le)
        cout << x << " ";
    reverse(ri.begin(), ri.end());
    for (auto x : ri)
        cout << x << " ";
    cout << '\n';
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
