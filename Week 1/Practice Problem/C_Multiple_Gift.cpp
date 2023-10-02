#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll x, y;
    cin >> x >> y;

    int count = 0;
    while (x <= y)
    {
        x *= 2;
        count++;
    }

    cout << count;

    return 0;
}