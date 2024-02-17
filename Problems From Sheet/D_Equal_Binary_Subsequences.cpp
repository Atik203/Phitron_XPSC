#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll freq = 0;
    vector<ll> ans;
    ll need = 0;
    for (ll i = 0; i < 2 * n; i += 2)
    {
        if (s[i] != s[i + 1])
        {
            freq++;
            ans.push_back(i + 1);
            if (s[i] - '0' != need)
            {
                ans.back()++;
            }
            need ^= 1;
        }
    }
    if (freq & 1)
    {
        cout << "-1\n";
        return;
    }
    cout << ans.size() << " ";
    for (auto it : ans)
    {
        cout << it << " ";
    }
    cout << "\n";
    for (ll i = 1; i <= 2 * n; i += 2)
    {
        cout << i << " \n"[i + 1 == 2 * n];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}