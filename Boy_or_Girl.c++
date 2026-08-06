#include <iostream>
#include <set>
#include <string>
using namespace std;
int main()
{
    string n;
    cin >> n;
    string unique_num;
    set<char> unique_chars(n.begin(), n.end());
    for (char c : unique_chars)
    {
        unique_num.push_back(c);
    }
    if (unique_num.length() % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}