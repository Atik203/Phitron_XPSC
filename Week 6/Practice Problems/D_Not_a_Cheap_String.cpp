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
        int p;
        cin >> p;
        string w(s);
        sort(w.rbegin(), w.rend());
        int cost = 0;
        f(i, 0, s.length())
            cost += s[i] - 'a' + 1;
        map<char, int> del;
        f(i, 0, w.length()) if (cost > p)
        {
            del[w[i]]++;
            cost -= w[i] - 'a' + 1;
        }
        f(i, 0, s.length())
        {
            if (del[s[i]] > 0)
            {
                del[s[i]]--;
                continue;
            }
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
