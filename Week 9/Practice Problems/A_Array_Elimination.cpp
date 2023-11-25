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
#define rf(i, n, s) for (long long int i = e - 1; i >= n; i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        f(i, 0, n) cin >> a[i];
        ll bit[30];
        f(i, 0, 30) bit[i] = 0;
        for (ll i = 0; i < 30; i++)
        {
            ll num = (1ll << i);
            for (ll j = 0; j < n; j++)
            {
                if ((a[j] & num) != 0)
                    bit[i]++;
            }
        }
        for (ll k = 1; k <= n; k++)
        {
            bool flag = 0;
            for (ll i = 0; i < 30; i++)
            {
                if ((bit[i] % k) != 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << k << " ";
        }
        cout << endl;
    }
    return 0;
}