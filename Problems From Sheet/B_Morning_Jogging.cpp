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

void solve()
{
    int n, m;
    cin >> n >> m;
    multiset<pair<int, int>> mst;
    int arr[101][101];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = -1;
            int x;
            cin >> x;
            mst.insert({x, i});
        }
    }
    for (int i = 0; i < m; i++)
    {
        auto itr = mst.begin();
        arr[itr->second][i] = itr->first;
        mst.erase(itr);
    }
    while (!mst.empty())
    {
        auto itr = mst.begin();
        int in = 0;
        while (arr[itr->second][in] != -1)
        {
            in++;
        }
        arr[itr->second][in] = itr->first;
        mst.erase(itr);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
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
