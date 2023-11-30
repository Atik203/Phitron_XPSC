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
        string s;
        cin >> s;
        vector<int> v(n + 1);
        for (int j = 0; j < n; j++)
            if (s[j] == '(')
                v[j + 1] = v[j] + 1;
            else
                v[j + 1] = v[j] - 1;

        if (v.back() != 0)
            cout << -1 << endl;
        else
        {
            if (*min_element(v.begin(), v.end()) == 0 || *max_element(v.begin(), v.end()) == 0)
            {
                cout << 1 << endl;
                for (int j = 0; j < n; j++)
                {
                    if (j)
                        cout << " ";
                    cout << 1;
                }
                cout << endl;
            }
            else
            {
                cout << 2 << endl;
                vector<int> ans;
                int cur = 0;
                while (cur < n)
                {
                    int w = (s[cur] == '(' ? 1 : 2);
                    do
                    {
                        cur++;
                        ans.push_back(w);
                    } while (v[cur] != 0);
                }
                for (int j = 0; j < n; j++)
                {
                    if (j)
                        cout << " ";
                    cout << ans[j];
                }
                cout << endl;
            }
        }
    }
    return 0;
}
