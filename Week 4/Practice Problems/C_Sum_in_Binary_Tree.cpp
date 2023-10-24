#include <bits/stdc++.h>
using namespace std;

long long sum_of_vertex(long long n)
{
    long long ans = 0;
    while (n > 0)
    {
        ans += n;
        n /= 2;
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long result = sum_of_vertex(n);
        cout << result << endl;
    }
    return 0;
}
