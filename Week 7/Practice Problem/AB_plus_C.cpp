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
        ll x;
        cin >> x;
        if (x > 1)
        {
            if (x <= 1e6)
                cout << 1 << " " << 1 << " " << x - 1 << endl;
            else if (x > 1e6 && x % 1000000 != 0)
                cout << 1000000 << " " << x / 1000000 << " " << x % 1000000 << endl;
            else
                cout << 1000000 << " " << x / 1000000 - 1 << " " << 1000000 << endl;
        }
        else
            cout << -1 << endl;
    }
    return 0;
}
