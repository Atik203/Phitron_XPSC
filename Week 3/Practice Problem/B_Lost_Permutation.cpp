#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        s += accumulate(b.begin(), b.end(), 0); // Add the sum of found elements to s
        int cnt = 0;

        for (int i = 1; i <= s; i++)
        {
            if (s >= i)
            {
                cnt = i;
                s -= i;
            }
            else
            {
                break;
            }
        }

        if (s == 0 && *max_element(b.begin(), b.end()) <= cnt && n <= cnt)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
