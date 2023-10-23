#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    set<char> v;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        v.insert(s[i]);
        if (v.size() > 3)
        {
            ans++;
            v.clear();
            v.insert(s[i]);
        }
    }
    if (!v.empty())
        ans++;
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
}