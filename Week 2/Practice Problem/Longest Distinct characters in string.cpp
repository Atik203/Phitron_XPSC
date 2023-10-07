//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars(string S);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;

        cout << longestSubstrDistinctChars(S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends

int longestSubstrDistinctChars(string S)
{
    int n = S.length();
    int i = 0, j = 0;
    int mx = 0;
    set<char> unq;

    while (j < n)
    {
        if (unq.find(S[j]) == unq.end())
        {
            unq.insert(S[j]);
            mx = max(mx, j - i + 1);
            j++;
        }
        else
        {
            unq.erase(S[i]);
            i++;
        }
    }

    return mx;
}