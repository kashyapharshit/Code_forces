#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> arr(n);
        map<long long, int> freq;
        long long total_sum = 0;
        int max_freq = 0;
        long long majority_card = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            total_sum += arr[i];
            freq[arr[i]]++;
            if (freq[arr[i]] > max_freq)
            {
                max_freq = freq[arr[i]];
                majority_card = arr[i];
            }
        }
        int dp = (max_freq - (n - max_freq + 2));
        int droped_count = max(0, dp);
        cout << total_sum - (droped_count * majority_card) << endl;
    }
}