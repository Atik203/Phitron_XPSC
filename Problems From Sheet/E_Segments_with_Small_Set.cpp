#include <iostream>
#include <unordered_map>

using namespace std;

long long countGoodSegments(int n, int k, int arr[])
{
    if (k == 0)
    {
        // If k is 0, each individual element is a good segment
        return n * (n + 1) / 2;
    }

    unordered_map<int, int> frequency;
    int left = 0;
    long long goodSegments = 0;

    for (int right = 0; right < n; ++right)
    {
        frequency[arr[right]]++;

        while (frequency.size() > k)
        {
            frequency[arr[left]]--;
            if (frequency[arr[left]] == 0)
            {
                frequency.erase(arr[left]);
            }
            left++;
        }

        goodSegments += (right - left + 1);
    }

    return goodSegments;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    long long result = countGoodSegments(n, k, arr);
    cout << result << endl;

    return 0;
}
