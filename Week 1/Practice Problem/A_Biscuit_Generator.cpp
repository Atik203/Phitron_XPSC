#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > c)
        cout << 0 << endl;
    else
    {
        int ans = (c / a) * b;

        cout << ans << endl;
    }
    return 0;
}