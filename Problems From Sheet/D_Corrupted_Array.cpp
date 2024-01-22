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
    int n;
    cin >> n;
    vector<int> b(n + 2);
    for (int &x : b)
    {
        cin >> x;
    }

    multiset<int> have(b.begin(), b.end());
    long long sum = accumulate(b.begin(), b.end(), 0LL);
    for (int x : b)
    {
        have.erase(have.find(x));
        sum -= x;
        if (sum % 2 == 0 && sum <= 2'000'000'000 && have.find(sum / 2) != have.end())
        {
            have.erase(have.find(sum / 2));
            for (int y : have)
            {
                cout << y << " ";
            }
            cout << endl;
            return;
        }
        sum += x;
        have.insert(x);
    }
    cout << -1 << endl;
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
