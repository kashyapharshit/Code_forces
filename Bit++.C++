#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        string a, b, c, d;
        a = "++X";
        b = "X++";
        c = "--X", d = "X--";
        string opr;
        cin >> opr;
        if (opr == a || opr == b)
            x = x + 1;
        else if (opr == c || opr == d)
        {
            x = x - 1;
        }
    }
    cout << x << endl;
}