#include <iostream>
using namespace std;
void games(int n, string k)
{
    int A = 0, D = 0;
    for (char c : k)
    {
        if (c == 'A')
        {
            A++;
        }
        else if (c == 'D')
        {
            D++;
        }
    }
    if (A > D)
    {
        cout << "Anton" << endl;
    }
    else if (D > A)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}
int main()
{
    int n;
    string k;
    cin >> n;
    cin >> k;
    games(n, k);
}