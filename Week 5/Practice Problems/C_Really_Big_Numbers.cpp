#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define ii pair<ll, ll>

map<ii, ll> dp;

ll n, s;

int digSum(ll num)
{
    int sum = 0;
    while (num)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

ll getMeAns()
{
    ll ans = 0;
    ll low = 1, high = n;

    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (mid - digSum(mid) >= s)
        {
            ans = max(ans, n - mid + 1);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    cin >> n >> s;
    cout << getMeAns() << endl;
    return 0;
}
