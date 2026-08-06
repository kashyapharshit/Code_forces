#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        long long count1 = 0;
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            sum += x;
            if (x == 1)
                count1++;
        }
        long long min = count1 * 2 + (n - count1) * 1;
        if (n == 1)
        {
            cout << "no\n";
        }

        else if (sum >= min)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}