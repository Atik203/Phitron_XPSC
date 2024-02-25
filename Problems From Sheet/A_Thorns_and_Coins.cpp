#include <bits/stdc++.h>

using namespace std;

signed main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    for (int _ = 0; _ < t; ++_)
    {
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 1; i < n; i++)
        {
            ans += (s[i] == '@');
            if (s[i] == '*' && s[i - 1] == '*')
                break;
        }
        cout << ans << "\n";
    }
    return 0;
}