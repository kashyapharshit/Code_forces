#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    // for (int ele : arr)
    // {
    //     cout << ele;
    // }
    long long final = 0;
    sort(arr.begin(), arr.end());
    while (!arr.empty())
    {
        int test = arr.back() - arr.front();
        int v1;
        if (test % k == 0)
        {
            v1 = test / k;
            final += v1;
            arr.pop_back();
        }
        else if (test % k != 0)
        {
            cout << "-1" << endl;
            return 0;
        }
    }
    cout << final;
}