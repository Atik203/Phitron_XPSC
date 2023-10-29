#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool can_cut_height(ll h, vector<ll> &trees, ll required_wood)
{
    ll total_wood = 0;
    for (ll tree : trees)
    {
        if (tree > h)
        {
            total_wood += (tree - h);
        }
    }
    return total_wood >= required_wood;
}

ll binary(vector<ll> &trees, ll required_wood)
{
    ll low = 0;
    ll high = *max_element(trees.begin(), trees.end());

    while (low <= high)
    {
        ll mid = low + (high - low) / 2;

        if (can_cut_height(mid, trees, required_wood))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return high;
}

int main()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> trees(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> trees[i];
    }

    ll result = binary(trees, m);
    cout << result << endl;

    return 0;
}
