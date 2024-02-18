#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    set<ll> used, not_used;
    vector<ll> ans;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        x += i;
        if (!used.count(x))
        {
            not_used.insert(x);
        }
        ll cur = *(--not_used.upper_bound(x)); // find the largest element(<= x) which is not in set "used"
        not_used.erase(cur);
        ans.push_back(cur);
        used.insert(cur);
        if (!used.count(cur - 1))
        {
            not_used.insert(cur - 1);
        }
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    for (auto i : ans)
    {
        cout << i << " ";
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