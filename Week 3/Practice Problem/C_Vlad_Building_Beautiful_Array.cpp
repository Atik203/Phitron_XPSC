#include <bits/stdc++.h>
using namespace std;

string is_beautiful_array(int n, vector<int> &arr)
{
    // Check if all numbers have the same parity
    bool sameParity = true;
    for (int num : arr)
    {
        if (num % 2 != arr[0] % 2)
        {
            sameParity = false;
            break;
        }
    }

    if (sameParity)
    {
        return "YES";
    }
    else
    {
        // Check if the minimum number is odd
        int minNum = *min_element(arr.begin(), arr.end());
        if (minNum % 2 == 1)
        {
            return "YES";
        }
        else
        {
            return "NO";
        }
    }
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int j = 0; j < n; ++j)
        {
            cin >> arr[j];
        }

        string result = is_beautiful_array(n, arr);
        cout << result << endl;
    }

    return 0;
}
