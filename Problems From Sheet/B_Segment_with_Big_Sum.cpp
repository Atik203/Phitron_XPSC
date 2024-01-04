#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long n, s;
    cin >> n >> s;

    vector<long long> arr(n);
    for (long long i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    long long left = 0, right = 0;
    long long currentSum = 0;
    long long minLength = LONG_LONG_MAX;

    while (right < n)
    {
        currentSum += arr[right];
        right++;

        while (currentSum >= s)
        {
            minLength = min(minLength, right - left);
            currentSum -= arr[left];
            left++;
        }
    }

    if (minLength == LONG_LONG_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minLength << endl;
    }
    return 0;
}