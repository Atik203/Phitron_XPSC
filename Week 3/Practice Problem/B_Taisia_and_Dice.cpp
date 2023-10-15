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
        int n, s1, s2;
        vector<int> res;
        cin >> n >> s1 >> s2;

        res.clear();
        int d = s1 - s2;
        for (; s2 >= d; s2 -= d)
            res.push_back(d);
        if (s2)
            res.push_back(s2);
        for (int i = 0; i < res.size() && res.size() + 1 < n;)
        {
            if (res[i] == 1)
            {
                ++i;
                continue;
            }
            --res[i];
            res.push_back(1);
        }
        res.push_back(d);
        sort(res.begin(), res.end());
        for (int x : res)
            cout << x << ' ';
        cout << endl;
    }
    return 0;
}
