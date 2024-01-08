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
#define rloop(i, j, k) for (int i = j; i >= k; i -= 1)

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    f(i, 0, n)
    {
        cin >> ar[i];
    }
    if (ar[n - 1] == 1)
    {
        cout << "NO" << endl;
        return;
    }
    vi ans;
    int prev = -1;
    int cnt = 0;
    rloop(i, n - 1, 0)
    {
        if (ar[i] == 0)
        {
            if (prev == 1)
            {
                ans.pop_back();
                ans.pb(cnt);
                cnt = 0;
            }

            ans.pb(0);

            prev = 0;
        }
        else
        {
            prev = 1;
            ans.pb(0);
            cnt++;
        }
    }
    if (cnt)
    {
        ans.pop_back();
        ans.pb(cnt);
    }
    cout << "YES" << endl;
    for (auto x : ans)
    {
        cout << x << " ";
    }
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
