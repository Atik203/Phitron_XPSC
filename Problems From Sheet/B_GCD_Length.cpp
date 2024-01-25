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
ll digit(ll no)
{
    ll cnt = 0;
    while (no)
    {
        ++cnt;
        no /= 10;
    }
    return cnt;
}
ll cal(ll pow, ll cnt)
{
    ll no = pow;
    while (digit(no) < cnt)
    {
        no *= pow;
    }
    return no;
}

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    ll des_a = a - c + 1;
    ll des_b = b - c + 1;

    cout << cal(2, des_a) << string(c - 1, '0') << " " << cal(3, des_b) << string(c - 1, '0') << endl;
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
