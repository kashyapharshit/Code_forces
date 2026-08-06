#include <iostream>
#include <algorithm>
using namespace std;
#include <string>
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int L = 1;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                L++;
        }
        // cout << L;
        int maxr = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i - 1] == s[i + 1] && s[i] != s[i - 1])
            {
                maxr = max(maxr, 2);
            }
            if (s[i] != s[i - 1] && s[i] != s[i + 1] && s[i - 1] != s[i + 1])
            {
                maxr = max(maxr, 1);
            }
        }
        cout << L - maxr << endl;
    }
}