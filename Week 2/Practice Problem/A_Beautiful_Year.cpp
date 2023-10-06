#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (true)
    {
        n++;

        string y = to_string(n);

        set<char> digits(y.begin(), y.end());

        if (digits.size() == y.length())
        {
            cout << n << endl;
            break;
        }
    }

    return 0;
}
