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

bool solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> t, m;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'T')
            t.push_back(i);
        else
            m.push_back(i);
    }
    if (t.size() != 2 * m.size())
        return false;
    for (int i = 0; i < m.size(); i++)
    {
        if (m[i] < t[i] || m[i] > t[i + m.size()])
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        cout << (solve() ? "YES" : "NO") << '\n';
    }
    return 0;
}
