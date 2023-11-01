#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int d1 = a - 1;
        int d2 = abs(b - c) + c - 1;
        int ans = 0;

        if (d1 <= d2)
        {
            ans += 1;
        }
        if (d1 >= d2)
        {
            ans += 2;
        }

        cout << ans << endl;
    }

    return 0;
}
