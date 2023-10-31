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

vector<int> all;
void possiblePalindrome()
{
    for (int i = 0; i < 32786; i++)
    {
        string s = to_string(i);
        string temp = s;
        reverse(s.begin(), s.end());
        if (temp == s)
        {
            all.push_back(i);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    possiblePalindrome();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int i;
        vi v(n);
        f(i, 0, n)
        {
            cin >> v[i];
        }

        unordered_map<int, int> x;
        ll ans = 0;
        for (auto val : v)
        {
            x[val]++;
            for (auto p : all)
            {
                ans += x[val ^ p];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
