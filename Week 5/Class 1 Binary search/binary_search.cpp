#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x;
    cin >> x;
    int ans = -1;
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == x)
        {
            ans = mid;
            break;
        }
        if (x < a[mid])
        {
            r = mid - 1;
        }
        if (x > a[mid])
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;

    return 0;
}