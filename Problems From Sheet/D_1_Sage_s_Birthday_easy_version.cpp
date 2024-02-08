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
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int l = 0, r = n + 1;
    while (r - l > 1)
    {
        int m = (l + r) / 2;
        bool f = true;
        if (2 * m + 1 > n)
        {
            f = false;
        }
        else
        {
            vector<int> b;
            int pos_a = 0, pos_b = n - (m + 1);
            for (int i = 0; i < 2 * m + 1; ++i)
            {
                if (i % 2 == 0)
                {
                    b.emplace_back(a[pos_b]);
                    ++pos_b;
                }
                else
                {
                    b.emplace_back(a[pos_a]);
                    ++pos_a;
                }
            }
            for (int i = 1; i < 2 * m + 1; i += 2)
            {
                if (b[i] >= b[i - 1] || b[i] >= b[i + 1])
                    f = false;
            }
        }
        if (f)
            l = m;
        else
            r = m;
    }
    cout << l << endl;
    vector<int> b;
    int pos_a = 0, pos_b = n - (l + 1);
    for (int i = 0; i < 2 * l + 1; ++i)
    {
        if (i % 2 == 0)
        {
            b.emplace_back(a[pos_b]);
            ++pos_b;
        }
        else
        {
            b.emplace_back(a[pos_a]);
            ++pos_a;
        }
    }
    for (int i = pos_a; i < n - (l + 1); ++i)
    {
        b.emplace_back(a[i]);
    }
    for (auto &c : b)
    {
        cout << c << " ";
    }
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
