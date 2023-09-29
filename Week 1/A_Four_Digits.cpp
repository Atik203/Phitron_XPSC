#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if (s.size() == 4)
        cout << s << endl;
    else
    {
        while (s.size() < 4)
        {
            s = '0' + s;
        }
        cout << s << endl;
    }
    return 0;
}