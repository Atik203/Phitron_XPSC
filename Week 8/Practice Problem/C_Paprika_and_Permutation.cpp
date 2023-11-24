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
        int n;
        cin >> n;
        bool flag = false;
        ll v[n + 1];
        ll a[n];
        vector<ll> b, c;
        cf(i, 0, n)
        {
            v[i] = false;
        }

        f(i, 0, n)
        {
            cin >> a[i];
            if (a[i] <= n)
            {
                if (v[a[i]] == false)
                {
                    v[a[i]] = true;
                }
                else
                {
                    b.push_back(a[i]);
                }
            }
            else
            {
                b.push_back(a[i]);
            }
        }

        cf(i, 1, n)
        {
            if (v[i] == false)
            {
                c.push_back(i);
            }
        }
        sort(b.begin(), b.end());

        int m = b.size();

        f(i, 0, m)
        {
            if (2 * c[i] >= b[i])
            {
                flag = true;
                break;
            }
        }

        if (flag == false)
        {
            cout << m << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}
