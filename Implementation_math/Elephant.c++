#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int x;
    cin >> x;
    // int divi = 5;
    // int rem;
    // int quo = x / divi;

    // if (x % divi == 0)
    // {
    //     cout << quo;
    // }
    // else
    // {
    //     cout << quo + 1;
    // }
    div_t result = div(x, 5);
    // cout << result.rem;
    // cout << result.quot;
    if (result.rem == 0)
    {
        cout << result.quot;
    }
    else
    {
        cout << result.quot + 1;
    }
}