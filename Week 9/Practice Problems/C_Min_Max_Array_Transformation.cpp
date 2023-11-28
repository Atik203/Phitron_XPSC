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
        int n;
        cin >> n;
        int a[n + 3], b[n + 3];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<int> mn, mx;
        int ind = 0;
        for (int i = 0; i < n; i++)
        {
            while (ind < n && a[i] > b[ind])
                ind++;
            mn.push_back(b[ind] - a[i]);
        }
        for (int i = 0; i < n; i++)
            cout << mn[i] << " ";
        cout << endl;

        ind = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            mx.push_back(b[ind] - a[i]);
            if (a[i] > b[i - 1])
                ind = i - 1;
        }
        reverse(mx.begin(), mx.end());
        for (int i = 0; i < n; i++)
            cout << mx[i] << " ";
        cout << endl;
    }
    return 0;
}
