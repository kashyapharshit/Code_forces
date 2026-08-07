#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, n, m;
        cin >> x >> n >> m;
        while (x > 20 && n > 0)
        {
            x = floor(x / 2) + 10;
            n--;
        }
        x = x - (m * 10);

        if (x <= 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}