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
    int n, m, h;
    cin >> n >> m >> h;
    pair<int, long long> rud;
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        vector<int> cur(m);
        for (int j = 0; j < m; j++)
        {
            cin >> cur[j];
        }
        std::sort(cur.begin(), cur.end());
        int task_cnt = 0;
        long long penalty = 0, sum = 0;
        for (int j = 0; j < m; j++)
        {
            if (sum + cur[j] > h)
                break;
            sum += cur[j];
            penalty += sum;
            task_cnt++;
        }
        if (i)
        {
            if (make_pair(-task_cnt, penalty) < rud)
                ans++;
        }
        else
            rud = {-task_cnt, penalty};
    }
    cout << ans << '\n';
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
