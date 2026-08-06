#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
int main()
{
    string n;
    cin >> n;
    n.erase(remove_if(n.begin(), n.end(), [](unsigned char c)
                      { return !isdigit(c); }),
            n.end());

    //  cout << n << endl;
    sort(n.begin(), n.end());
    //  cout << n << endl;
    int len = n.length();
    string res = "";
    for (char c : n)
    {
        res += c;
        res += "+";
    }
    res.pop_back();
    cout << res << endl;
}