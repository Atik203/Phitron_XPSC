#include <bits/stdc++.h>
using namespace std;

long long inf = 1e15;
int M = 1e9 + 7;
double pi = atan2(0, -1);
double eps = 1e-6;

int main()
{
    int t;

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int time, h, m;
        cin >> h >> m;
        time = 60 * h + m;
        int ans = 24 * 60;
        for (int i = 0; i < n; ++i)
        {
            cin >> h >> m;
            int t = 60 * h + m - time;
            if (t < 0)
                t += 24 * 60;
            ans = min(ans, t);
        }
        cout << ans / 60 << " " << ans % 60;
        cout << endl;
    }
    return 0;
}