#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<int> prime_count(n + 1, 0);

    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            for (int j = i; j <= n; j += i)
            {
                prime_count[j]++;
            }
        }
    }

    int count = 0;
    for (int i = 2; i <= n; i++)
    {
        if (prime_count[i] == 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
