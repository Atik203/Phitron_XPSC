
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, p;
    cin >> s >> p;
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
    cout << count << endl;
    return 0;
}
