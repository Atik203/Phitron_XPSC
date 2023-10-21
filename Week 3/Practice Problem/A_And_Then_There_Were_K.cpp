#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int msb = 1;
        while (msb <= n)
        {
            msb <<= 1;
        }
        int k = (msb >> 1) - 1;

        cout << k << endl;
    }

    return 0;
}
