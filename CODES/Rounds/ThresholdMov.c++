#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> arr;
        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;
            arr.push_back(temp);
        }
        // for (int a : arr)
        // {
        //     cout << a;
        // }
        // cout << endl;
        if (n % 2 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            int min_odd = 2000000000;
            int max_even = -1;
            for (int j = 0; j < n; j++)
            {
                if (j % 2 == 0)
                {
                    if (arr[j] < min_odd)
                    {
                        min_odd = arr[j];
                    }
                }
                else
                {
                    if (arr[j] > max_even)
                    {
                        max_even = arr[j];
                    }
                }
            }
            if (min_odd - max_even >= 2)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}