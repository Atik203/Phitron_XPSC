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
        int n, m;
        cin >> n >> m;
        int ans = INT_MAX;
        if (n != 1)
        {
            int d = (n / 3) * m + (m / 3) * (n % 3) + min((n % 3), (m % 3));
            ans = min(ans, d);
        }
        if (m != 1)
        {
            int d = (m / 3) * n + (n / 3) * (m % 3) + min((m % 3), (n % 3));
            ans = min(ans, d);
        }
        cout << ans << endl;
    }
    return 0;
}
