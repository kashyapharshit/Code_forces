#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int rating = arr[k - 1];
    for (int j = 0; j < n; j++)
    {

        if (arr[j] >= rating && arr[j] > 0)
        {
            count += 1;
        }
    }
    cout << count << endl;
}