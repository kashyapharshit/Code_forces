#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int hh, mm;
    cin >> hh >> mm;
    int times = 0;

    // 1. Agar minute ya hour kisi mein bhi 7 hai, toh answer 0 hoga
    if (mm % 10 == 7 || mm / 10 == 7 || hh % 10 == 7 || hh / 10 == 7)
    {
        cout << times;
    }
    // 2. Agar mm < 7 hai (jaise 05)
    else if (mm < 7)
    {
        // Yahan minute pichle ghante se aayega, toh effective minute mm + 60 hoga
        // Aur ghanta ek kam ho jayega (hh - 1)
        int new_hh = hh - 1;
        if (new_hh < 0)
            new_hh = 23; // Agar hour 0 se niche gaya toh 23 ban jaye

        // Agar pichle ghante (new_hh) mein hi 7 aa gaya (jaise 17:05 se 1 ghanta piche 16:65, ya 07:05 se piche 06:65 -> wait, 07 mein 7 hai toh pehle hi check ho jata)
        // Let's check using formula:
        int new_mm = mm + 60;
        int mm1 = new_mm - 10;
        mm1 = ((mm1 / 10) * 10 + 7);
        times = (new_mm - mm1) / x;
        cout << times;
    }
    else if (mm % 10 < 7)
    {
        int mm1 = mm - 10;
        mm1 = ((mm1 / 10) * 10 + 7);
        times = (mm - mm1) / x;
        cout << times;
    }
    else
    {
        int mm1 = ((mm / 10) * 10 + 7);
        times = (mm - mm1) / x;
        cout << times;
    }
}