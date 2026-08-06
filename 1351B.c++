#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a1, b1, a2, b2;
        cin >> a1 >> b1;
        cin >> a2 >> b2;

        if (a1 == a2 && a1 == (b1 + b2))
        {
            cout << "YES\n";
        }
        else if (a1 == b2 && a1 == (b1 + a2))
        {
            cout << "YES\n";
        }
        else if (b1 == a2 && b1 == (a1 + b2))
        {
            cout << "YES\n";
        }
        else if (b1 == b2 && b1 == (a1 + a2))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}