#include <bits/stdc++.h>
using namespace std;

int getCount(int x)
{
    int total = 0;
    while (x % 2 == 0)
    {
        x /= 2;
        total++;
    }
    return total;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long x = 0, extra = 0;
        vector<int> a(n), b;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            x += getCount(a[i]);
            int cnt = getCount(i + 1);
            extra += cnt;
            b.push_back(cnt);
        }
        if (x >= n)
        {
            cout << 0 << endl;
            continue;
        }
        if (x + extra < n)
        {
            cout << -1 << endl;
            continue;
        }
        int ans = 0;
        sort(b.rbegin(), b.rend());
        for (auto i : b)
        {
            ans++;
            if (x + i >= n)
                break;
            x += i;
        }
        cout << ans << endl;
    }
    return 0;
}
