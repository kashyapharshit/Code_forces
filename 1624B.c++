#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        bool case1 = ((2 * b - c) > 0 && (2 * b - c) % a == 0);
        bool case2 = ((a + c) % (2 * b) == 0);
        bool case3 = ((2 * b - a) > 0 && (2 * b - a) % c == 0);
        if (case1 || case2 || case3)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}