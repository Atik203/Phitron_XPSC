#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        // If y is not divisible by x, there is no answer.
        if (y % x != 0)
        {
            cout << "0 0" << endl;
        }
        else
        {
            // Choose a=1 and b=y/x.
            cout << "1 " << y / x << endl;
        }
    }

    return 0;
}
