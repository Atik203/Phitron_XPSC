#include <bits/stdc++.h>

using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, L;
        cin >> n >> L;
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i].second >> v[i].first;
        }
        sort(v.begin(), v.end());

        int ans = 0;
        for (int l = 0; l < n; l++)
        {
            multiset<int> s;
            int cur = 0;
            for (int r = l; r < n; r++)
            {
                s.insert(v[r].second);
                cur += v[r].second;
                while (!s.empty() && v[r].first - v[l].first + cur > L)
                {
                    int max_value = *s.rbegin();
                    cur -= max_value;
                    s.extract(max_value);
                }
                ans = max(ans, (int)s.size());
            }
        }

        cout << ans << "\n";
    }

    return 0;
}