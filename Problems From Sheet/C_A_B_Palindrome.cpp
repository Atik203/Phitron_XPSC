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
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    for (int times = 0; times < 2; times++)
    {
        for (int i = 0; i < (int)s.size(); i++)
        {
            int j = (int)s.size() - i - 1;
            if (s[i] != '?')
            {
                if (s[j] == '?')
                {
                    s[j] = s[i];
                }
                else if (s[i] != s[j])
                {
                    cout << -1 << endl;
                    return;
                }
            }
        }
        reverse(s.begin(), s.end());
    }
    a -= count(s.begin(), s.end(), '0');
    b -= count(s.begin(), s.end(), '1');
    int ques = count(s.begin(), s.end(), '?');
    bool emptyMid = (s.size() % 2 == 1 && s[s.size() / 2] == '?');
    if (a < 0 || b < 0 || a + b != ques || (emptyMid && a % 2 == 0 && b % 2 == 0))
    {
        cout << -1 << endl;
        return;
    }
    if (a % 2 == 1 || b % 2 == 1)
    {
        int i = s.size() / 2;
        if (s[i] != '?')
        {
            cout << -1 << endl;
            return;
        }
        s[i] = (a % 2 == 1 ? '0' : '1');
        if (a % 2 == 1)
        {
            a--;
        }
        else
        {
            b--;
        }
    }
    if (a % 2 == 1 || b % 2 == 1)
    {
        cout << -1 << endl;
        return;
    }
    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == '?')
        {
            int j = s.size() - i - 1;
            if (a > 0)
            {
                a -= 2;
                s[i] = s[j] = '0';
            }
            else
            {
                b -= 2;
                s[i] = s[j] = '1';
            }
        }
    }
    cout << s << endl;
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
