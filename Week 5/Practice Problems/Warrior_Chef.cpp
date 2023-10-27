
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
const ll N = 1e5 + 5;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n, h; // n=no of enimies   h= initial strenth
        cin >> n >> h;

        vector<int> vec(n);
        for (int i = 0; i < n; i++)
            cin >> vec[i];

        int total_anemy_pow = 0, min_anemy = INT_MAX;
        for (auto it : vec)
        {
            total_anemy_pow += it;
            min_anemy = min(min_anemy, it);
        }
        if (total_anemy_pow < h)
            cout << 0 << endl;
        else if (total_anemy_pow == h)
            cout << min_anemy << endl;
        else
        {
            int defend_pow = 0;
            sort(vec.begin(), vec.end(), greater<int>());
            int i;
            for (i = 0; i < n; i++)
            {
                defend_pow += vec[i];
                if (defend_pow >= h)
                {
                    break;
                }
            }
            cout << vec[i] << endl;
        }
    }
    return 0;
}