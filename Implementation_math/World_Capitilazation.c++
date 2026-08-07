#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;
    if (islower(n[0]))
    {
        n[0] = toupper(n[0]);
        cout << n;
    }
    else
    {
        cout << n;
    }
}