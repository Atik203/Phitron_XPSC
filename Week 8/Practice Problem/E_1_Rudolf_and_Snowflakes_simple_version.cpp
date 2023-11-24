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
#define rf(i, n, s) for (long long int i = s - 1; i >= n; i--) // Fix here

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    set<ll> nums;
    for (ll k = 2; k <= 1000; ++k)
    {
        ll val = 1 + k;
        ll p = k * k;
        for (int cnt = 2; cnt <= 20; ++cnt)
        {
            val += p;
            if (val > 1e6)
                break;
            nums.insert(val);
            p *= k;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        if (nums.count(n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
