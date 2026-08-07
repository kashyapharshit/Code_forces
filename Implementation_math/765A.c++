#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string home;
    cin >> home;
    vector<string> flight(n);
    for (string &c : flight)
    {
        cin >> c;
    }

    // for (string &e : flight)
    // {
    //     cout << e;
    // }
    if (n % 2 == 0 || n == 0)
        cout << "home";
    else
    {
        cout << "contest";
    }
}