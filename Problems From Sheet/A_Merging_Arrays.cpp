#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sort(int n, int m, const vector<int> &arr1, const vector<int> &arr2)
{
    vector<int> merged_array;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j])
        {
            merged_array.push_back(arr1[i]);
            i++;
        }
        else
        {
            merged_array.push_back(arr2[j]);
            j++;
        }
    }

    while (i < n)
    {
        merged_array.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        merged_array.push_back(arr2[j]);
        j++;
    }

    return merged_array;
}

int main()
{

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
    vector<int> result = merge_sort(n, m, arr1, arr2);

    for (int i = 0; i < n + m; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
