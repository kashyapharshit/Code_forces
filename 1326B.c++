#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    vector<long long> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    vector<long long> a(n);
    long long current_max = 0; // Yeh aapke code ka 'x' variable ka hi kaam karega (max tracker)

    for (int i = 0; i < n; i++)
    {
        // Formula: a[i] = b[i] + max(a_1, ..., a_{i-1})
        a[i] = b[i] + current_max;

        // Agle element ke liye max update kar do
        current_max = max(current_max, a[i]);
    }

    // Output the result
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
// #include <iostream>
// using namespace std;
// #include <vector>
// int main()
// {
//     long long n;
//     cin >> n;
//     vector<int> b(n);
//     for (int &i : b)
//     {
//         cin >> i;
//     }
//     vector<int> a(n), x(n);
//     x[0] = b[0], x[1] = b[0], a[0] = b[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (b[i] > 0)
//         {
//             a[i] = b[i] + x[i];
//             x[i + 1] = a[i];
//         }
//         else
//         {
//             a[i] = b[i] + x[i];
//             x[i + 1] = x[i];
//         }
//     }
//     for (int &j : a)
//     {
//         cout << j << " ";
//     }
// }