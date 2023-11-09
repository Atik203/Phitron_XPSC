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
        string s;
        cin >> s;
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                ct++;
        }
        if (min(ct, n - ct) % 2)
            cout << "Zlatan\n";
        else
            cout << "Ramos\n";
    }
}