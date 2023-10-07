#include <bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    long long n = a.size();
    long long i = 0, j = 0;
    long long mx = LONG_LONG_MIN;
    long long sum = 0;

    while (j < n)
    {
        sum += a[j];

        while (sum > k)
        {
            sum -= a[i];
            i++;
        }

        if (sum == k)
        {
            mx = max(mx, j - i + 1);
        }

        j++;
    }

    return mx;
}