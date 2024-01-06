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
    ll n;
    cin >> n;
    ll temp = (n * (n + 1) / 2);
    if (temp % 2 == 1)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    ll target = temp / 2;
    ll sum = 0;
    ll i = n;
    unordered_set<ll> s;
    s.reserve(n);
    while (sum < target)
    {
        s.insert(i);
        sum += i;
        /* cout << "Inserting " << i << " sum = " << sum << endl; */
        i--;
    }
    if (sum > target)
    {
        sum -= (i + 1);
        assert(sum < target);
        s.erase(s.find(i + 1));
        /* cout << "Removing " << i + 1 << " sum = " << sum << endl; */
        s.insert(target - sum);
        /* cout << "Inserting " << target - sum  << " sum = " << sum << endl; */
    }
    cout << s.size() << "\n";
    for (auto element : s)
    {
        cout << element << " ";
    }
    cout << "\n";
    cout << n - s.size() << "\n";
    for (int j = 1; j <= n; j++)
    {
        if (s.find(j) == s.end())
        {
            cout << j << " ";
        }
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
