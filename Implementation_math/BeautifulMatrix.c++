#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5][5];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int row1, column1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
            {
                row1 = i + 1;
                column1 = j + 1;
            }
        }
    }
    int count = 0;
    while (row1 != 3 || column1 != 3)
    {
        if (row1 < 3)
        {
            row1 += 1;
        }
        else if (row1 > 3)
        {
            row1 -= 1;
        }
        else if (column1 < 3)
        {
            column1 += 1;
        }
        else if (column1 > 3)
        {
            column1 -= 1;
        }
        count += 1;
    }
    cout << count << endl;

    return 0;
}