#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    bool ans = false;
    for (int i = 0; i < 10005; i++)
    {
        for (int j = 0; j < 10005; j++)
        {
            if (a * i + b * j == c || a * j + b * i == c)
            {
                ans = true;
                break;
            }
        }
    }

    if (ans)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}