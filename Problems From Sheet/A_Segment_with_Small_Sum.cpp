#include <bits/stdc++.h>

using namespace std;

int longest_segment(int n, long long s, const vector<int> &arr)
{
    int left = 0, right = 0;
    long long current_sum = 0;
    int max_length = 0;

    while (right < n)
    {
        current_sum += arr[right];

        while (current_sum > s)
        {
            current_sum -= arr[left];
            left++;
        }

        max_length = max(max_length, right - left + 1);

        right++;
    }

    return max_length;
}

int main()
{

    int n;
    long long s;
    cin >> n >> s;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = longest_segment(n, s, arr);
    cout << result << endl;

    return 0;
}
