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

        vector<int> a(n);
        int xor_a = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            xor_a ^= a[i];
        }

        if (xor_a == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            if (n % 2 == 1)
            {
                cout << xor_a << endl;
            }
            else
            {
                cout << "-1" << endl;
            }
        }
    }

    return 0;
}
