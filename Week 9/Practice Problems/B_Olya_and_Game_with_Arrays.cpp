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
#define all(v) v.begin(), v.end()

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

        int mn = INT_MAX;
        vector<int> mn2;
        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vector<int> v(m);
            for (auto &el : v)
                cin >> el;

            int mn_el = *min_element(all(v));
            mn = min(mn, mn_el);
            v.erase(find(all(v), mn_el));
            mn2.push_back(*min_element(all(v)));
        }
        cout << mn + (ll)accumulate(all(mn2), 0ll) - *min_element(all(mn2)) << "\n";
    }
    return 0;
}
