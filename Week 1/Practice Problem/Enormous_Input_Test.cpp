#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int count = 0;
    while (n--)
    {
        int x;
        cin >> x;

        if (x % k == 0)
            count++;
    }
    cout << count << endl;
    return 0;
}