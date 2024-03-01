#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int mex(vector<int> &t)
{
    sort(t.begin(), t.end());

    int cnt = 0;
    for (int i = 0; i < (int)t.size(); i++)
    {
        if (cnt == t[i])
            cnt++;
        else
            break;
    }

    return cnt;
}

int main()
{
    ios_base::sync_with_stdio(false);

    int testcases;
    cin >> testcases;

    for (int t = 1; t <= testcases; t++)
    {
        int N;
        cin >> N;

        vector<int> v, a, b;
        map<int, int> rem;

        for (int i = 0; i < N; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);

            if (rem[x] == 0)
            {
                a.push_back(x);
            }
            else if (rem[x] == 1)
                b.push_back(x);
            rem[x]++;
        }

        int mxa = mex(a), mxb = mex(b);

        cout << mxa + mxb << endl;
    }

    return 0;
}
