#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>
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
    int size, count = 0, avg;
    while (true)
    {
        int total_sum = accumulate(arr.begin(), arr.end(), 0LL);
        size = arr.size();

        avg = round((double)total_sum / size);
        if (avg < k)
        {
            arr.push_back(k);
            count++;
        }
        if (avg >= k)
        {
            break;
        }
        /* code */
    }
    cout << count;
}