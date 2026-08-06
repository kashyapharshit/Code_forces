#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    // Aapki condition: Agar k == n-1 hai, toh impossible hai
    if (k == n - 1)
    {
        cout << -1 << "\n";
        return;
    }

    int tukra1, tukra2;

    // N even ya odd hone par tukra1 aur tukra2 ka logic
    if (n % 2 == 0)
    {
        tukra1 = n / 2;
        tukra2 = n / 2;
    }
    else
    {
        tukra1 = n / 2; // Floor value of n/2
        tukra2 = n - tukra1;
    }

    // Tukra1 aur Tukra2 ko milakar ek base string banana
    string s = "";
    for (int i = 0; i < tukra1; i++)
        s += '0';
    for (int i = 0; i < tukra2; i++)
        s += '1';

    // Loop chalayenge jab tak humein sahi string na mil jaye
    while (true)
    {
        // String ko randomly shuffle karna (Random string generation)
        random_shuffle(s.begin(), s.end());

        int checker = 0;

        // Loop chalayenge n times (n-1 tak kyunki i+1 check karna hai)
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                checker++;
            }

            // Aapka idea: Agar checker k se bada ho jaye toh aage check karne ka fayda nahi
            if (checker > k)
            {
                break;
            }
        }

        // Agar checker exactly k ke barabar hai, toh string print karke loop khatam kar do
        if (checker == k)
        {
            cout << s << "\n";
            return;
        }
    }
}

int main()
{
    // Har baar alag random pattern ke liye seed set karna

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}