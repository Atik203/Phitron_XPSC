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
        char c;
        cin >> c;
        string s;
        cin >> s;
        vi ans;
        bool flag = true;
        for (auto x : s)
        {
            if (x != c)
            {
                flag = false;
            }
        }
        if (!flag)
        {
            f(i, 1, n + 1)
            {
                flag = true;
                f(j, i, n + 1)
                {
                    flag &= (s[j - 1] == c);
                    j += i - 1;
                }
                if (flag)
                {
                    ans.pb(i);
                    break;
                }
            }
            if (!flag)
            {
                ans.pb(n);
                ans.pb(n - 1);
            }
        }
        cout << ans.size() << endl;
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
