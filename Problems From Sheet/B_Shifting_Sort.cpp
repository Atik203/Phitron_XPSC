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
    vector<int> a(n);
    vector<pii> actions;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n - 1; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[min_pos])
                min_pos = j;

        if (min_pos > i)
        {
            actions.push_back({i, min_pos});
            int opt = a[min_pos];
            for (int j = min_pos; j > i; j--)
                a[j] = a[j - 1];
            a[i] = opt;
        }
    }

    cout << actions.size() << '\n';
    for (auto &lr : actions)
    {
        cout << lr.first + 1 << ' ' << lr.second + 1 << ' ' << lr.second - lr.first << '\n';
    }
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
