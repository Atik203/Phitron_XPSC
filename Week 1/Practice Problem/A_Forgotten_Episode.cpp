#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long a[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }

    long long sum = accumulate(a, a + n - 1, 0LL);

    cout << (n * (n + 1)) / 2 - sum << endl;

    return 0;
}