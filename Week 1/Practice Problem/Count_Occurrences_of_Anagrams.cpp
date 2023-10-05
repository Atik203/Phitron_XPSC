//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
    int search(string p, string s)
    {
        int k = p.size();

        int i = 0, j = 0, count = 0;

        int frqp[26] = {0};
        for (auto c : p)
        {
            frqp[c - 'a']++;
        }

        int frqs[26] = {0};
        while (j < s.size())
        {
            frqs[s[j] - 'a']++;

            if (j >= k - 1)
            {
                bool flag = true;
                for (int x = 0; x < 26; x++)
                {
                    if (frqs[x] != frqp[x])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    count++;
                }

                frqs[s[i] - 'a']--;
                i++;
            }

            j++;
        }

        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends