#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9 + 7;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        long long result = 1;
        for (int i = 0; i < k; i++)
        {
            result = (result * n) % MOD;
        }

        cout << result << endl;
    }
    return 0;
}
