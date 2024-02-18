#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    ll l = 1, r = n;
    for (ll i = 1; i <= n; i++)
    {
        if (i & 1)
        {
            cout << l << " ";
            l++;
        }
        else
        {
            cout << r << " ";
            r--;
        }
    }
    cout << "\n";
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test_cases = 1;
    cin >> test_cases;
    while (test_cases--)
    {
        solve();
    }
}