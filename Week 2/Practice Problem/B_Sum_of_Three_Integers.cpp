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

    int k, s;
    cin >> k >> s;
    int ans = 0;

    for (int x = 0; x <= k; ++x)
    {
        for (int y = 0; y <= k; ++y)
        {
            int z = s - x - y;
            if (0 <= z and z <= k)
            {
                ans = ans + 1;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
