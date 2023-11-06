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
#define rf(i, n, s) for (long long int i = n - 1; i >= 0; i--)
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
        int n = s.length();
        vector<bool> a(n + 1);
        a[0] = true;
        f(i, 0, n)
            a[i + 1] = a[i] && (s[i] == '1' || s[i] == '?');
        vector<bool> b(n + 1);
        b[0] = true;
        for (int i = n - 1; i >= 0; i--)
            b[n - i] = b[n - i - 1] && (s[i] == '0' || s[i] == '?');
        int result = 0;
        f(i, 0, n) if (a[i] && b[n - i - 1])
            result++;
        cout << result << endl;
    }
    return 0;
}
