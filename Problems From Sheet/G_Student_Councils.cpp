#include <bits/stdc++.h>
using namespace std;
#define ll long long

int k, n;
bool good(vector<ll> v, ll m)
{
    ll sum = 0;
    for (int i = 0; i < v.size(); i++)
        sum += min(m, v[i]);

    return sum >= m * k;
}

int main()
{

    cin >> k >> n;

    vector<ll> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    ll l = 0;
    ll r = 1e17;
    while (r > l + 1)
    {
        ll m = (l + r) / 2;
        if (good(v, m))
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }

    cout << l << endl;

    return 0;
}
