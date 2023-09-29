#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    if (x == y)
    {
        cout << x + y << endl;
    }
    else
    {
        cout << max(x, y) + max(x, y) - 1 << endl;
    }

    return 0;
}