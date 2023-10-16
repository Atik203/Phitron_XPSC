#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    string full = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";

    while (t--)
    {
        string s;
        cin >> s;

        if (full.find(s) != string::npos)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
