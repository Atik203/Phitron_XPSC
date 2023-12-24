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

    vector<vector<int>> v(n);

    vector<int> cnt(100);

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;

        v[i].resize(k);
        for (auto &e : v[i])
            cin >> e;

        for (auto e : v[i])
            cnt[e]++;
    }

    int ans = 0;
    vector<int> cnt2(100);

    for (int i = 0; i < 100; i++)
    {
        if (!cnt[i])
            continue;

        fill(cnt2.begin(), cnt2.end(), 0);

        for (int j = 0; j < n; j++)
        {
            if (binary_search(v[j].begin(), v[j].end(), i))
                continue;

            for (auto e : v[j])
                cnt2[e] = 1;
        }

        ans = max(ans, accumulate(cnt2.begin(), cnt2.end(), 0));
    }

    cout << ans << endl;
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
