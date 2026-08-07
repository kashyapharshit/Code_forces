#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        x = abs(x);
        y = abs(y);
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '4')
                a++;
            else
                b++;
        }
        if ((a + 2 * b) < (x + y))
        {
            cout << "NO" << "\n";
        }
        else if ((a + b) < max(x, y))
        {
            cout << "NO" << "\n";
        }
        else
            cout << "YES" << "\n";
        // cout << a << b;
    }
}