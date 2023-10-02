#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool visited[26];
        memset(visited, false, sizeof(visited));

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (visited[s[i] - 'A'])
            {
                sum += 1;
            }
            else
            {
                sum += 2;
                visited[s[i] - 'A'] = true;
            }
        }

        cout << sum << endl;

        /*
        Alternative solution:
        The answer is always n + total number of distinct characters
        Here is code:

        int distinct_characters = set<char>(s.begin(), s.end()).size();
        cout << n + distinct_characters << endl;

        */
    }

    return 0;
}