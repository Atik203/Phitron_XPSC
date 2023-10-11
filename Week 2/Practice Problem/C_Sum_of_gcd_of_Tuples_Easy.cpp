#include <bits/stdc++.h>
using namespace std;

int gcd(int p, int q)
{
    if (p % q == 0)
        return q;
    return gcd(q, p % q);
}

int main()
{

    int K;
    cin >> K;

    long long total_sum = 0;

    for (int a = 1; a <= K; ++a)
    {
        for (int b = 1; b <= K; ++b)
        {
            for (int c = 1; c <= K; ++c)
            {
                total_sum += gcd(gcd(a, b), c);
            }
        }
    }

       cout << total_sum << endl;

    return 0;
}
