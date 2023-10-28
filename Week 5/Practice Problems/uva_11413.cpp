#include <bits/stdc++.h>
using namespace std;

// Can the vessels fill all the m containers, each has capacity C?
bool FillAllContainers(const vector<int> &vessels,
                       int m,
                       int C)
{
    int container = 1;
    int capacity = C;
    for (int i = 0; i < vessels.size(); ++i)
    {
        // No container can contain so much milk.
        if (vessels[i] > C)
            return false;

        if (vessels[i] > capacity)
        {
            // Already m containers are filled.
            if (container == m)
                return false;
            ++container;
            capacity = C;
        }
        capacity -= vessels[i];
    }
    return true;
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> vessels(n);
        for (int i = 0; i < n; ++i)
            cin >> vessels[i];

        // The capacity 1<=c<=1000000000.
        int l = 1, u = 1000000000, C = 0;
        while (l <= u)
        {
            int mid = (l + u) / 2;
            if (FillAllContainers(vessels, m, mid))
            {
                C = mid;
                u = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << C << endl;
    }
    return 0;
}