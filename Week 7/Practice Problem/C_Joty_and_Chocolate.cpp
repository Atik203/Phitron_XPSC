#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll gcd(ll a, ll b) { return !a ? b : gcd(b % a, a); }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }

int main()
{
    ll n, a, b, p, q;

    if (!(cin >> n >> a >> b >> p >> q))
    {
        return 1;
    }

    ll ans = 0;
    ans += (n / a) * p;
    ans += (n / b) * q;
    ans -= (n / lcm(a, b)) * min(p, q);

    cout << ans << endl;

    return 0;
}
