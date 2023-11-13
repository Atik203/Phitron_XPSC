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
        int a1, a2, a3, b1, b2, b3;
        cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

        vi a;
        a.pb(a1);
        a.pb(a2);
        a.pb(a3);

        vi b;
        b.pb(b1);
        b.pb(b2);
        b.pb(b3);

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        string sum1 = "";
        string sum2 = "";
        f(i, 0, 3)
        {
            sum1 += to_string(a[i]);

            sum2 += to_string(b[i]);
        }

        if (stoi(sum1) == stoi(sum2))
        {
            cout << "Tie" << endl;
        }
        else if (stoi(sum1) > stoi(sum2))
        {
            cout << "Alice" << endl;
        }
        else
            cout << "Bob" << endl;
    }
    return 0;
}
