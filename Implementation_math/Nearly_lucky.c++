#include <iostream>
#include <vector>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<int> arr;

    while (n > 0)
    {
        arr.push_back(n % 10);
        n = n / 10;
    }

    // for (int i : arr)
    // {
    //     cout << i;
    // }
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 4 || arr[i] == 7)
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
        cout << "NO";
}