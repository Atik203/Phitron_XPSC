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
    int N, M;
    cin >> N >> M;

    if (((N % 2 == 0) && (M % 2 == 1)) || (M < N))
    { // impossible cases, M < N and (M - odd, N - even)
        cout << "NO" << endl;
    }
    else if ((N % 2) == 1)
    { // (N - odd)
        cout << "YES" << endl;
        for (int i = 1; i < N; ++i)
        {
            cout << "1 ";
        }
        cout << M - N + 1 << endl;
    }
    else
    { // (N - even, M - even)
        cout << "YES" << endl;
        for (int i = 2; i < N; ++i)
        {
            cout << "1 ";
        }
        cout << (M - N + 2) / 2 << ' ' << (M - N + 2) / 2 << endl;
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
