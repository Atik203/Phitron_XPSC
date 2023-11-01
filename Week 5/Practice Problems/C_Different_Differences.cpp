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
    ll t, n, k, i, j, diff;

    cin >> t;

    while (t--)
    {
        cin >> k >> n;

        j = 1;
        diff = 1;

        for (i = 1; i <= k; i++)
        {
            cout << j << " ";

            if (n - (j + diff) >= (k - i - 1))
            {
                j = j + diff;
                diff++;
            }
            else
            {
                j++;
            }
        }

        cout << endl;
    }

    return 0;
}