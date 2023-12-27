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
    vector<pair<int, int>> v;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i});
    }
    sort(v.begin(), v.end());
    int mx[n + 3];
    int mxx = 0;
    int mn[n + 3];
    int mnn = INT_MAX;
    for (int i = v.size() - 1; i >= 0; i--)
    {
        mxx = max(mxx, v[i].second);
        mx[i] = mxx;
        mnn = min(mnn, v[i].second);
        mn[i] = mnn;
    }
    map<int, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        int ind = i + 1;
        int x = mx[i] - mn[i] + 1;
        int val = v[i].first;
        mp[val] = max(mp[val], x * 2);
    }
    for (int i = 1; i <= k; i++)
        cout << mp[i] << " ";
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
