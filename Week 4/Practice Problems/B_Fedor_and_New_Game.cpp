#include <bits/stdc++.h>
using namespace std;

int countdiff(int x, int y)
{
    int diff = 0;
    int result = x ^ y;
    while (result)
    {
        diff += result & 1;
        result >>= 1;
    }
    return diff;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v;
    for (int i = 0; i < m + 1; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int fedorArmy = v.back();
    v.pop_back();

    int count = 0;
    for (int army : v)
    {
        int diff = countdiff(fedorArmy, army);
        if (diff <= k)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
