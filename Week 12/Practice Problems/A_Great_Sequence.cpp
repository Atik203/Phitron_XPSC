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
const int loga = 70;
void solve()
{
    int n;
    cin >> n;
    int x;
    cin >> x;
    if (x == 1)
    {
        set<int> v;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (v.find(a) == v.end())
            {
                v.insert(a);
            }
            else
            {
                v.erase(a);
            }
        }
        cout << v.size() << endl;
        for (auto num : v)
        {
            cout << num << ' ';
        }
        return;
    }
    int zero_cnt = 0;
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            zero_cnt++;
            continue;
        }
        int p = 0;
        while (a % x == 0)
        {
            p++;
            a /= x;
        }
        if (mp.find(a) != mp.end())
        {
            mp[a][p]++;
        }
        else
        {
            mp[a] = vector<int>(loga);
            mp[a][p]++;
        }
    }
    vector<int> res;
    for (auto [k, v] : mp)
    {
        int p = 1;
        for (int i = 0; i < loga - 1; i++)
        {
            int dec = min(v[i], v[i + 1]);
            v[i] -= dec;
            v[i + 1] -= dec;
            for (int j = 0; j < v[i]; j++)
            {
                res.push_back(k * (p * x));
            }
            p *= x;
        }
        for (int j = 0; j < v[loga - 1]; j++)
        {
            res.push_back(k * (p * x));
        }
    }
    if (zero_cnt % 2 == 1)
    {
        res.push_back(0);
    }
    cout << res.size() << endl;
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
