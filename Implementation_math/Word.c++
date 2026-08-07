#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int upper = 0, lower = 0;
    for (char &c : n)
    {
        if (isupper(c))
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if (upper > lower)
    {
        transform(n.begin(), n.end(), n.begin(), [](char c)
                  { return toupper(c); });
    }
    else
    {
        {
            transform(n.begin(), n.end(), n.begin(), [](char c)
                      { return tolower(c); });
        }
    }
    cout << n;
}