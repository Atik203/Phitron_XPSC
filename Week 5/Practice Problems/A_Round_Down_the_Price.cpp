#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m;
        cin >> m;
        string t = to_string(m);
        string s = "1";
        for (int i = 1; i < t.size(); i++)
        {
            s += '0';
        }
        int k = stoi(s);
        cout << m - k << endl;
    }
}