#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int road = 0;
    for (int size : arr)
    {
        // cout << size;
        if (size > k)
        {
            road += 2;
        }
        else
        {
            road += 1;
        }
    }
    cout << road;
}