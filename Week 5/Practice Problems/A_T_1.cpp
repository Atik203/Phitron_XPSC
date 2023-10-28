#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k = 1;
    vector<int> v;
    while (cin >> n >> m, n + m)
    {
        v.clear();
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            v.push_back(t);
        }
        sort(v.begin(), v.end());
        cout << "CASE# " << k++ << ":" << endl;
        for (int i = 1; i <= m; i++)
        {
            int t;
            cin >> t;
            auto x = lower_bound(v.begin(), v.end(), t);
            if (x == v.end() || *x != t)
            {
                cout << t << " not found" << endl;
            }
            else
                cout << t << " found at " << x - v.begin() + 1 << endl;
        }
    }
    return 0;
}