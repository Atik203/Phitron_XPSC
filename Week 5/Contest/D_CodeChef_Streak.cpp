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
#define rf(i, n, s) for (long long int i = n - 1; i >= n; i--)
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
        int om[n];
        int addy[n];
        int count1 = 0;
        int count2 = 0;
        int mx1 = INT_MIN, mx2 = INT_MIN;
        int i;
        f(i, 0, n)
        {
            cin >> om[i];

            if (om[i] == 0)
            {
                count1 = 0;
            }
            else
            {
                count1++;
                mx1 = max(mx1, count1);
            }
        }
        f(i, 0, n)
        {
            cin >> addy[i];

            if (addy[i] == 0)
            {
                count2 = 0;
            }
            else
            {
                count2++;
                mx2 = max(mx2, count2);
            }
        }

        if (mx1 == mx2)
            cout << "Draw" << endl;
        else if (mx1 > mx2)
            cout << "Om" << endl;
        else
            cout << "Addy" << endl;
    }
    return 0;
}
