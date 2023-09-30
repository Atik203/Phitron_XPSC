#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int a[26] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        a[s[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (a[i] == 0)
        {
            cout << (char)(i + 'a') << endl;
            return 0;
        }
    }

    cout << "None" << endl;
    return 0;
}