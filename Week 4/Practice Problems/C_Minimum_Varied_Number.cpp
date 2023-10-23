#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s;
        cin >> s;
        string result;
        for (int d = 9; d >= 1; d--)
            if (s >= d)
            {
                result = char('0' + d) + result;
                s -= d;
            }
        cout << result << endl;
    }
}