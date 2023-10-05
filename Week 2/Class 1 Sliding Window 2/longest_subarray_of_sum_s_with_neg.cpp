#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s;
    cin >> s;

    map<int, int> mp;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == s)
        {
            cout << i + 1 << endl;
        }
        if (sum > s)
        {
            if (mp.find(sum - s) != mp.end())
            {
                cout << i - mp[sum - s] << endl;
            }
        }
        if (mp.find(sum) == mp.end())
        {
            mp[sum] = i;
        }
    }
    return 0;
}