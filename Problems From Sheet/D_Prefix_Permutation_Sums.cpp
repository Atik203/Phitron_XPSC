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

ll n;

bool isPermutation(vector<ll> a)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] <= 0 || a[i] > n)
        {
            return false;
        }
    }
    set<ll> s(a.begin(), a.end());
    return s.size() == n;
}

vector<ll> prefSumToArray(vector<ll> p)
{
    vector<ll> res(n);
    res[0] = p[0];
    for (int i = 1; i < n; ++i)
    {
        res[i] = p[i] - p[i - 1];
    }
    return res;
}

void solve()
{
    cin >> n;
    vector<ll> a(n - 1);
    for (int i = 0; i + 1 < n; ++i)
    {
        cin >> a[i];
    }
    ll x = n * (n + 1) / 2;
    if (a.back() != x)
    {
        a.push_back(x);
        vector<ll> b = prefSumToArray(a);
        if (isPermutation(b))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        return;
    }
    map<ll, int> cnt;
    cnt[a[0]]++;
    for (int i = 1; i < n - 1; ++i)
    {
        cnt[a[i] - a[i - 1]]++;
    }
    vector<int> cntGt1;
    for (auto p : cnt)
    {
        if (p.second > 1)
        {
            cntGt1.push_back(p.first);
        }
    }
    if (cntGt1.size() > 1)
    {
        cout << "NO\n";
        return;
    }
    if (cntGt1.size() == 1)
    {
        int x1 = cntGt1[0];
        if (cnt[x1] > 2)
        {
            cout << "NO\n";
            return;
        }
    }
    vector<int> cnt0;
    for (int i = 1; i <= n; ++i)
    {
        if (cnt[i] == 0)
        {
            cnt0.push_back(i);
        }
    }
    if (cnt0.size() != 2)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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
