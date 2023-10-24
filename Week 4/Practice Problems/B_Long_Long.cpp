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

        long long sum = 0;
        int cnt = 0;
        bool open = false;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);

            if (a[i] < 0 && !open)
            {
                open = true;
                cnt++;
            }
            if (a[i] > 0)
            {
                open = false;
            }
        }

        cout << sum << " " << cnt << endl;
    }

    return 0;
}
