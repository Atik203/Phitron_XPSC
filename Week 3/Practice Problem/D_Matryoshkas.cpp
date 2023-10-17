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
        vi a(n);
        mii cnt;
        si b;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            cnt[a[i]]++;
            b.insert(a[i]);
            b.insert(a[i] + 1);
        }
        int last = 0;
        int result = 0;
        for (auto x : b)
        {
            int c = cnt[x];
            result += max(0, c - last);
            last = c;
        }
        cout << result << endl;
    }
    return 0;
}
