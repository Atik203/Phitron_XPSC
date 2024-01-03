#include <bits/stdc++.h>

using namespace std;

int count_elements(const vector<int> &arr, int value)
{
    int left = 0, right = arr.size();

    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }

    return left;
}

int main()
{
    // Input reading
    int n, m;
    cin >> n >> m;

    vector<int> arr1(n), arr2(m);

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    sort(arr1.begin(), arr1.end());

    for (int i = 0; i < m; i++)
    {
        int count = count_elements(arr1, arr2[i]);
        cout << count << " ";
    }

    return 0;
}
