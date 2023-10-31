#include <bits/stdc++.h>

using namespace std;

char get(int i)
{
    return 'a' + i - 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int i = n - 1;
        string res;
        while (i >= 0)
        {
            if (s[i] != '0')
            {
                res += get(s[i] - '0');
                i--;
            }
            else
            {
                res += get(stoi(s.substr(i - 2, 2)));
                i -= 3;
            }
        }
        reverse(res.begin(), res.end());
        cout << res << '\n';
    }
    return 0;
}