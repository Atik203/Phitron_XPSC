#include <bits/stdc++.h>
using namespace std;

const int maxn = 200007;
int t, n;
int cnt[maxn];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cnt[i] = 0;
        for (int i = 1; i <= n; i++)
        {
            int u;
            cin >> u;
            cnt[u]++;
        }
        int mx = 0;
        for (int i = 1; i <= n; i++)
            mx = max(mx, cnt[i]);
        cout << mx << "\n";
    }
    return 0;
}