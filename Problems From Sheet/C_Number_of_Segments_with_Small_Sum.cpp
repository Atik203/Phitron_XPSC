#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    long long s;
    cin >> n >> s;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    long long currentSum = 0;
    int left = 0, right = 0;
    long long goodSegments = 0;

    while (right < n)
    {
        currentSum += arr[right];
        right++;

        while (currentSum > s)
        {
            currentSum -= arr[left];
            left++;
        }

        goodSegments += (right - left);
    }

    cout << goodSegments << endl;
    return 0;
}