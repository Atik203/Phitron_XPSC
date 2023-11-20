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
        string s;
        cin >> s;
        int n = (s[0] - '0');
        int ans = (n - 1) * 10;
        if (s.length() == 4)
        {
            ans += 10;
        }
        else if (s.length() == 3)
        {
            ans += 6;
        }
        else if (s.length() == 2)
        {
            ans += 3;
        }
        else
            ans += 1;

        cout << ans << endl;
    }
    return 0;
}
