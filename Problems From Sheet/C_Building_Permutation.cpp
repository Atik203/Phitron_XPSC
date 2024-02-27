#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[300000];
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    long long result(0);
    for (int i = 0; i < n; ++i)
    {
        result += abs(i + 1 - a[i]);
    }
    cout << result << endl;

    return 0;
}