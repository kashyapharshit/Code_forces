#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int n;
    cin >> n;
    vector<char> colors(n);
    for (char &c : colors)
    {
        cin >> c;
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (colors[i] == colors[i + 1])
        {
            count++;
        }
    }
    cout << count;
}