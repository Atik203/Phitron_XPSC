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
        vi v(n);
        f(i, 0, n)
        {
            cin >> v[i];
        }

        mii mp;
        f(i, 0, n)
        {
            if (v[i] > n)
                continue;
            mp[v[i]]++;
        }
        vi ans(n + 1);
        for (auto i : mp)
        {
            for (int j = i.first; j <= n; j += i.first)
            {
                ans[j] += i.second;
            }
        }
        cout << *max_element(ans.begin(), ans.end()) << endl;
    }
    return 0;
}
