#include <iostream>
using namespace std;

int main()
{

    int t, a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        if ((a * 4) <= 1000)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}