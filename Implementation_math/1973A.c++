#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        long long total_sum = p1 + p2 + p3;

        if (total_sum % 2 != 0)
        {
            cout << -1 << "\n";
            continue;
        }

        long long max_draws = min(p1 + p2, total_sum / 2);

        cout << max_draws << "\n";
    }
}