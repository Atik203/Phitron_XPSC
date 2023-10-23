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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        string s;
        cin >> s;
        bool flag = true;
        map<int, char> mp;
        for (int i = 0; i < n; i++)
        {
            if (mp.count(a[i]) && mp[a[i]] != s[i])
            {
                flag = false;
                break;
            }
            else if (mp.count(a[i]) == 0)
            {
                mp[a[i]] = s[i];
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
