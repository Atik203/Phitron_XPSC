#include <bits/stdc++.h>
using namespace std;
int p[100005];
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> p[i];
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1 || i == n || (p[i - 1] < p[i]) != (p[i] < p[i + 1]))
                ans.push_back(p[i]);
        }
        cout << ans.size() << endl;
        for (int i : ans)
            cout << i << " ";
        cout << endl;
    }
}