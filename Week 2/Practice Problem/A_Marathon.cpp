#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int participants_in_front = (b > a) + (c > a) + (d > a);

        cout << participants_in_front << endl;
    }

    return 0;
}
