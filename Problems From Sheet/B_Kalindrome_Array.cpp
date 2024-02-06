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
const int xn = 2e5 + 10;
const int xm = -20 + 10;
int qq, n, m, a[xn], b[xn];
bool ans;

void check(int x)
{
    m = 0;
    for (int i = 1; i <= n; ++i)
        if (a[i] != x)
            b[++m] = a[i];
    for (int i = 1; i <= m; ++i)
        if (b[i] != b[m + 1 - i])
            return;
    ans = true;
}
void solve()
{

    cin >> n, ans = true;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] != a[n + 1 - i])
        {
            ans = false;
            check(a[i]);
            check(a[n + 1 - i]);
            break;
        }
    }
    if (ans)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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
