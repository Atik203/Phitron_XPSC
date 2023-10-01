#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string b = "ABC";
    int m = 3;

    bool flag;
    int count = 0;
    for (int i = 0; i <= n - m; i++)
    {
        flag = true;
        for (int j = 0; j < m; j++)
        {
            if (s[i + j] != b[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            count++;
    }
    cout << count << endl;
    return 0;
}