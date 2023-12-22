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
    auto cmp = [](pii const &x, pii const &y)
    {
        return x > y;
    };
    set<pii, decltype(cmp)> a(cmp);
    vector<pii> answer;
    for (int i = 0; i < n; i++)
    {
        int ai;
        cin >> ai;
        if (ai > 0)
            a.emplace(ai, i + 1);
    }
    while (a.size() > 1)
    {
        auto p1 = *a.begin();
        a.erase(a.begin());
        auto p2 = *a.begin();
        a.erase(a.begin());
        answer.emplace_back(p1.second, p2.second);
        if (p1.first > 1)
            a.emplace(p1.first - 1, p1.second);
        if (p2.first > 1)
            a.emplace(p2.first - 1, p2.second);
    }
    cout << answer.size() << '\n';
    for (auto &p : answer)
    {
        cout << p.first << ' ' << p.second << '\n';
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
