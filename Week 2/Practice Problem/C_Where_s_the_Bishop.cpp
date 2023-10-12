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
        char g[9][9];
        for (int i = 1; i <= 8; i++)
        {
            for (int j = 1; j <= 8; j++)
            {
                cin >> g[i][j];
            }
        }
        for (int i = 2; i <= 7; i++)
        {
            for (int j = 2; j <= 7; j++)
            {
                if (g[i][j] == '#' && g[i - 1][j - 1] == '#' && g[i - 1][j + 1] == '#' && g[i + 1][j - 1] == '#' && g[i + 1][j + 1] == '#')
                {
                    cout << i << ' ' << j << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
