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
#define rf(i, s, n) for (long long int i = n - 1; i >= s; i--)
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define all(a) sort(a.begin(), a.end())
#define All(a, n) sort(a, a + n);
#define rall(a) sort(a.rbegin(), a.rend())

void solve()
{

    int n;
    cin >> n;
    int ar[n + 4];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    sort(ar, ar + n);
    vector<int> v;
    if (n % 2 == 1)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0, j = n / 2; i < n / 2; i++, j++)
    {
        v.push_back(ar[i]);
        v.push_back(ar[j]);
    }
    v.push_back(v[0]);
    v.push_back(v[1]);
    int ans = 0;
    for (int i = 1; i < v.size() - 1; i++)
    {
        if (v[i] > v[i - 1] && v[i] > v[i + 1])
            continue;
        else if (v[i] < v[i - 1] && v[i] < v[i + 1])
            continue;
        else
        {
            ans = 1;
            break;
        }
    }
    if (ans == 1)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
