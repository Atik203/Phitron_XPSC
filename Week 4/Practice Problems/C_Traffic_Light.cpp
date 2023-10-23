
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s += s;
        n += n;
        int a = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            if (s[i] == c)
            {
                while (i < n && s[i] != 'g')
                {
                    cnt++;
                    i++;
                }
                if (s[i] == 'g')
                {
                    a = max(a, cnt);
                }
            }
        }

        if (c == 'g')
            cout << 0 << endl;
        else
            cout << a << endl;
    }

    return 0;
}
