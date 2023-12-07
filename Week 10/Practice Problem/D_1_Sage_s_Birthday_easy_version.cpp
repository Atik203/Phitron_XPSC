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
    int N;
    vector<int> ice_spheres;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        ice_spheres.push_back(x);
    }

    sort(ice_spheres.begin(), ice_spheres.end());

    for (int i = 1; i < N - 1; i += 2)
    {
        swap(ice_spheres[i], ice_spheres[i - 1]);
    }

    int ans = 0;

    for (int i = 1; i < N - 1; i++)
    {
        if (ice_spheres[i] < ice_spheres[i - 1] && ice_spheres[i] < ice_spheres[i + 1])
            ++ans;
    }
    cout << ans << endl;
    for (auto x : ice_spheres)
        cout << x << " ";
    cout << endl;
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
