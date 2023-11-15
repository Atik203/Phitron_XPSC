#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    map<long long int, int> cnt;
    cnt[0]++;

    long long int sm = 0, res = 0;

    while (n--)
    {
        long long int v;
        cin >> v;
        sm += v;
        res += cnt[sm - x];
        cnt[sm]++;
    }

    cout << res << '\n';

    return 0;
}
