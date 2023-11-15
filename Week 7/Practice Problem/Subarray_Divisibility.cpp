#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    map<int, int> cnt;
    cnt[0] = 1;

    long long sum = 0, res = 0;

    for (int i = 0; i < n; ++i)
    {
        sum = (sum + arr[i]) % n;
        if (sum < 0)
        {
            sum += n;
        }

        res += cnt[sum];
        cnt[sum]++;
    }

    cout << res << '\n';
    return 0;
}
