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
    const long N = 1e9;
    set<long> s;
    set<pair<long, long>> t;
    map<long, long> r;

    long cnt(0);

    long q;   // fix: declare variable for number of queries
    cin >> q; // fix: input the number of queries

    while (q--) // fix: loop over the queries
    {
        long w;
        cin >> w;

        if (w == 1)
        {
            ++cnt;
            long m;
            cin >> m;

            s.insert(cnt);
            t.insert(make_pair(m, N - cnt));
            r[cnt] = m;
        }
        else if (w == 2)
        {
            long num = *(s.begin());
            cout << num << " ";
            s.erase(num);
            t.erase(make_pair(r[num], N - num));
            r.erase(num);
        }
        else if (w == 3)
        {
            pair<long, long> cust = *t.rbegin();
            long num = N - cust.second;
            long spend = cust.first;
            cout << num << " ";
            s.erase(num);
            t.erase(cust);
            r.erase(num);
        }
    }

    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
