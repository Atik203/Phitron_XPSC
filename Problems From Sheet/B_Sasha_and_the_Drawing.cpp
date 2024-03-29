
#include <bits/stdc++.h>
using namespace std;

#define fast                          \
    std::ios::sync_with_stdio(false); \
    cin.tie(nullptr);
#define int long long int
#define endl "\n"

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll mod = 1e9 + 7;
const ll eps = -1e9;
const ll maxn = 1e5 + 1;
const ll inf = 5e18;
const ll minf = -inf;

int32_t main()
{
    fast;

    int tt;
    cin >> tt;

    while (tt--)
    {

        int n, k;
        cin >> n >> k;

        ll ans = k / 2;

        if (k & 1)
            ++ans;

        int diag = (4 * n) - 2;
        if (diag == k)
            ans = n + n;

        cout << ans << endl;
    }
    return 0;
}