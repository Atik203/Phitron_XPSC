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
    int i, j, k;
    int n, m, t;
    pii s;

    cin >> n;
    cin >> s.first >> s.second;
    pii a[n];

    for (i = 0; i < n; i++)
        cin >> a[i].first >> a[i].second;

    map<char, int> mp;

    for (i = 0; i < n; i++)
    {
        // may go left
        if (a[i].first > s.first)
            mp['R']++;
        else if (a[i].first < s.first)
            mp['L']++;

        if (a[i].second > s.second)
            mp['U']++;
        else if (a[i].second < s.second)
            mp['D']++;
    }

    int mx = 0;
    pii ans;

    // R
    if (s.first + 1 >= 0 && s.second >= 0 && mx < mp['R'])
        ans = {s.first + 1, s.second}, mx = mp['R'];

    // L
    if (s.first - 1 >= 0 && s.second >= 0 && mx < mp['L'])
        ans = {s.first - 1, s.second}, mx = mp['L'];

    // U
    if (s.first >= 0 && s.second + 1 >= 0 && mx < mp['U'])
        ans = {s.first, s.second + 1}, mx = mp['U'];

    // D
    if (s.first >= 0 && s.second - 1 >= 0 && mx < mp['D'])
        ans = {s.first, s.second - 1}, mx = mp['D'];

    cout << mx << endl;
    if (mx)
        cout << ans.first << " " << ans.second << endl;
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
