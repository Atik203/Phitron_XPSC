#include <bits/stdc++.h>
using namespace std;

bool same(double a, double b)
{
    return fabs(a - b) < 1e-15;
}

int main()
{
    double n;
    cin >> n;
    double l = 0.0;
    double r = n;
    while ((r - l) >= 1e-15)
    {
        double mid = l + (r - l) / 2;
        double val = mid * mid;
        if (same(val, n))
        {
            cout << mid << endl;
            break;
        }
        else if (val > n)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }

    return 0;
}