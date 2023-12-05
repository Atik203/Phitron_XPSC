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

const int N = 200005;
int n;
int a[N], b[N], c[N], ra[N], rb[N];
void print()
{
    f(i, 0, n)
    {
        cout << a[i] << ' ';
    }
    cout << endl;

    f(i, 0, n)
    {
        cout << b[i] << ' ';
    }
    cout << endl;
}

void solve()
{
    cin >> n;
    vector<pii> V;
    f(i, 0, n)
    {
        cin >> c[i];
        a[i] = b[i] = 0;
        ra[i + 1] = rb[i + 1] = 1;
        V.pb({c[i], i});
    }
    rall(V);

    f(i, 0, n)
    {
        int k = V[i].second;
        if (ra[c[k]] == 1)
            a[k] = c[k], ra[c[k]]--;
        else
            b[k] = c[k], rb[c[k]]--;
    }

    int r1 = n, r2 = n;
    f(i, 0, n)
    {
        int k = V[i].second;
        if (a[k] == 0)
        {
            while (ra[r1] == 0)
                r1--;
            ra[r1]--;
            if (r1 > b[k])
            {
                cout << "NO" << endl;
                return;
            }
            a[k] = r1--;
        }
        else
        {
            while (rb[r2] == 0)
                r2--;
            rb[r2]--;
            if (r2 > a[k])
            {
                cout << "NO" << endl;
                return;
            }
            b[k] = r2--;
        }
    }
    cf(i, 1, n)
    {
        if (ra[i] != 0 || rb[i] != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    print();
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
