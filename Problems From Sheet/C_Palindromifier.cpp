#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

    string s, s1;
    cin >> s;
    ll len = s.length();
    s1 = s;
    reverse(s1.begin(), s1.end());
    if (s == s1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 3 << endl;
        cout << "R " << len - 1 << endl;
        cout << "L " << len << endl;
        cout << "L " << 2 << endl;
    }
}