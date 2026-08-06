#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int price = k * (w * (w + 1) / 2);
    cout << max(0, price - n);

    // for (int i = 0; i < w; i++)
    // {
    //     price += k * (i + 1);
    // }
    // // cout << price;
    // if ((price - n) < 0)
    // {
    //     cout << 0;
    // }
    // else
    // {
    //     cout << price - n;
    // }
}
