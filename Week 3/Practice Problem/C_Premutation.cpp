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
        vector<vector<int>> perm(n, vector<int>(n - 1));
        vector<int> p(n, 0);
        vector<int> cnt(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            p[i] = i + 1;
            for (int j = 0; j < n - 1; j++)
            {
                cin >> perm[i][j];
                if (j == 0)
                    cnt[perm[i][j]]++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] == n - 1)
            {
                p[0] = i;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (perm[i][0] != p[0])
            {
                for (int j = 0; j < n - 1; j++)
                {
                    p[j + 1] = perm[i][j];
                }
            }
        }
        for (int i = 0; i < n; i++)
            cout << p[i] << ' ';
        cout << endl;
    }
    return 0;
}
