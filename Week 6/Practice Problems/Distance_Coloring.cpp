#include <bits/stdc++.h>
using namespace std;
const int MOD = 1000000007;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        int k;
        cin >> n >> k;

        long long int count = 1;

        for (int i = 0; i < n; i++)
        {
            if (k > 0)
            {
                count = (k * count) % MOD;
                k--;
            }
            else
                break;
        }
        cout << count << endl;
    }
    return 0;
}