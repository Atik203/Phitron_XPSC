#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int result = 0;

    for (int i = 0; i < N; ++i)
    {
        int Pi;
        cin >> Pi;

        result ^= Pi;
    }

    cout << result << endl;

    return 0;
}
