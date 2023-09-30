//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {

        long long sum = 0;
        long long mx = LONG_LONG_MIN;
        int i = 0, j = 0;
        while (j < N)

        {

            sum += Arr[j];
            if (j >= K - 1)
            {
                mx = max(mx, sum);
                sum -= Arr[i];
                i++;
            }
            j++;
        }

        return mx;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        ;
        vector<int> Arr;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K, Arr, N) << endl;
    }
    return 0;
}
