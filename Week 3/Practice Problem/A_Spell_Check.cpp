#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name = "Timur";
    sort(name.begin(), name.end());

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        string s;
        cin >> s;
        sort(s.begin(), s.end());
        cout << (s == name ? "YES" : "NO") << endl;
    }
}