#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, X;
    cin >> N >> X;

    vector<int> A(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    vector<int> result;
    for (int i = 0; i < N; ++i)
    {
        if (A[i] != X)
        {
            result.push_back(A[i]);
        }
    }

    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i];
        if (i < result.size() - 1)
        {
            cout << " ";
        }
    }

    cout << endl;

    return 0;
}
