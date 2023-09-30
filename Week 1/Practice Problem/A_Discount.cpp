#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    double ans = (((a - b) * 100) / a);
    cout << setprecision(15) << ans << endl;

    return 0;
}