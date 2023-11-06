#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        string b;
        cin >> b;
        sort(b.begin(), b.end());
        if (b[0] == 'a' && b.size() > 1)
            cout << "-1";
        else if (b[0] == 'a')
            cout << "1";
        else
        {
            ll i, ans = 1;
            for (i = 1; i <= a.size(); i++)
            {
                ans *= 2;
            }
            cout << ans;
        }
        cout << endl;
    }
}