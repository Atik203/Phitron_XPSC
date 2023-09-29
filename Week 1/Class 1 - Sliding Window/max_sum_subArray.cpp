#include <bits/stdc++.h>
using namespace std;
#define fori(i, s, n) for (i = s; i < n; i++)

int main()
{
    int n;
    cin >> n;
    int a[n];
    int i;
    fori(i, 0, n) cin >> a[i];
    int k;
    cin >> k;

    int mx = INT_MIN;
    int j;

    fori(i, 0, n - k + 1)
    {
        int s = 0;
        fori(j, 0, i + k)
        {
            s += a[j];
        }
        mx = max(mx, s);
    }

    cout << mx << endl;
    return 0;
}