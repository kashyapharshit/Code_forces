#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int Xa, Xb, Xc;
        int Ya, Yb, Yc;
        cin >> Xa >> Ya;
        cin >> Xb >> Yb;
        cin >> Xc >> Yc;
        long long min_x = 0;
        if (Xb < Xa && Xc < Xa || Xb > Xa && Xc > Xa)
        {
            min_x = min(abs(Xa - Xb), abs(Xa - Xc));
        }
        long long min_y = 0;

        if (Yb < Ya && Yc < Ya || Yb > Ya && Yc > Ya)
        {
            min_y = min(abs(Ya - Yb), abs(Ya - Yc));
        }
        long long common = 1 + min_y + min_x;
        cout << common << endl;
    }
}