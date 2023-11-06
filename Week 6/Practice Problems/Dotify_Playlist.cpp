#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define endl '\n'
#define f(i, s, n) for (long long int i = s; i < n; i++)
#define cf(i, s, n) for (long long int i = s; i <= n; i++)
#define rf(i, n, s) for (long long int i = e - 1; i >= n; i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        vi v;
        int m[n];
        int L[n];
        int i;
        f(i, 0, n)
        {
            cin >> m[i] >> L[i];
        }
        bool flag = false;
        int count = 0;
        f(i, 0, n)
        {
            if (l == L[i])
            {
                v.push_back(m[i]);
                flag = true;
                count++;
            }
        }
        if ((flag == false) || (k > count))
        {
            cout << -1 << endl;
            continue;
        }
        sort(v.begin(), v.end(), greater<int>());
        int sum = 0;
        f(i, 0, k)
        {
            sum = sum + v[i];
        }
        cout << sum << endl;
    }
    return 0;
}
