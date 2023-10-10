#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    vector<int> A(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
    }

    unordered_map<int, int> gcdCount;

    for (int i = 2; i <= 1000; ++i)
    {
        int count = 0;

        for (int j = 0; j < n; ++j)
        {
            if (A[j] % i == 0)
            {
                count++;
            }
        }

        gcdCount[i] = count;
    }

    int maxGCD = 2;
    int maxCount = 0;

    for (const auto &entry : gcdCount)
    {
        if (entry.second > maxCount)
        {
            maxCount = entry.second;
            maxGCD = entry.first;
        }
    }

    cout << maxGCD << endl;
    return 0;
}