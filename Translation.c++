#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string n, r, k;
    cin >> n;
    cin >> r;
    k = n;
    // sort(n.begin(), n.end());
    // cout << n;
    reverse(k.begin(), k.end());
    // cout << k;
    if (r == k)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}