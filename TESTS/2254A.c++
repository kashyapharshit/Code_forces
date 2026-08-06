#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        long long count = 0;

        while (a != b && b != c && a != c)
        {

            long long current_max = max({a, b, c});
            long long current_min = min({a, b, c});

            if (a == current_max)
                a--;
            else if (b == current_max)
                b--;
            else
                c--;

            if (a == current_min)
                a++;
            else if (b == current_min)
                b++;
            else
                c++;

            count++;
        }
        cout << count << "\n";
    }
    return 0;
}