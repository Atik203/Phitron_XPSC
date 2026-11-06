#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s;
    cin >> s;

        map<int, int> mp;

        int sum = 0;
        int mx = 0;

        for (int i = 0; i < N; i++) {
            sum += A[i];

            if (sum == K) {
                mx = i + 1;
            }

            if (mp.find(sum - K) != mp.end()) {
                mx = max(mx, i - mp[sum - K]);
            }

            if (mp.find(sum) == mp.end()) {
                mp[sum] = i;
            }
        }

        cout<<mx<<endl;

    return 0;
}
