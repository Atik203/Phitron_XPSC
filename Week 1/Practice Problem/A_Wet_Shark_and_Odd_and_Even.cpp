#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long a[n];
    long long sum = 0;
    long long minOdd = LLONG_MAX;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 == 1)
        {
            minOdd = min(minOdd, a[i]);
        }
    }

    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        cout << sum - minOdd << endl;
    }

    return 0;
}
