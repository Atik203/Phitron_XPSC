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

vector<pair<char, int>> split(string s)
{
    char c = s[0];
    int cnt = 1;
    vector<pair<char, int>> result;
    auto ss = s.c_str();
    for (int i = 1; i <= int(s.length()); i++)
    {
        if (ss[i] != c)
        {
            result.push_back({c, cnt});
            c = s[i];
            cnt = 1;
        }
        else
            cnt++;
    }
    return result;
}

void solve()
{
    string s, t;
    cin >> s >> t;
    auto sa(split(s)), ta(split(t));
    bool ok = sa.size() == ta.size();
    if (ok)
        f(i, 0, sa.size())
        {
            if (sa[i].first != ta[i].first || sa[i].second > ta[i].second)
            {
                ok = false;
            }
        }

    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
