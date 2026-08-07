#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        string s;
        int x = 0, y = 0;
        cin >> s;

        bool found = false;
        for (int cycles = 0; cycles < 100 && !found; cycles++)
        {
            for (char c : s)
            {
                if (c == 'N')
                    y += 1;
                else if (c == 'E')
                    x += 1;
                else if (c == 'S')
                    y -= 1;
                else
                    x -= 1;

                if (x == a && y == b)
                {
                    found = true;
                    break;
                }
            }
        }

        if (found)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
    return 0;
}