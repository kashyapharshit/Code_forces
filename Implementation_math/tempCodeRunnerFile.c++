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
        if (a1 == a2)
        {
            long long an = a1 + a2;
            long long bn = b1 + b2;
            if(an==bn)
            {
                cout << "YES\n";
            }
        }
       else if (a1 == b2)
        {
            long long an = a1 + b2;
            long long bn = b1 + a2;
            if (an == bn)
            {
                cout << "YES\n";
            }
        }
        else if (b1 == a2)
        {
            long long an = a2 + b1;
            long long bn = b2+ a1;
            if (an == bn)
            {
                cout << "YES\n";
            }
        }
        else if (b1 == b2)
        {
            long long an = b1 + b2;
            long long bn = a1 + a2;
            if (an == bn)
            {
                cout << "YES\n";
            }
        }
    }
}