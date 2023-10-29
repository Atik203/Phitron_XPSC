#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n;
        long long x;
        cin >> n >> x;
        long long a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long l = 0, r = 2000000007;
        while (l < r)
        {
            long long mid = l + (r - l + 1) / 2;
            long long total = 0;
            for (int i = 0; i < n; i++)
            {
                total += max(mid - a[i], 0LL);
            }
            if (total <= x)
            {
                l = mid;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << l << endl;
    }
}