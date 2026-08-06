#include <iostream>
#include <algorithm>
#include <cctype> // For ::tolower

using namespace std;

int main()
{
    string first, second;
    cin >> first >> second;

    // Convert both strings to lowercase
    transform(first.begin(), first.end(), first.begin(), ::tolower);
    transform(second.begin(), second.end(), second.begin(), ::tolower);

    // --- STL APPROACH ---
    // C++ automatically compares strings character by character (lexicographically)
    if (first < second)
    {
        cout << "-1" << endl;
    }
    else if (first > second)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;

    /*
    --- YOUR ORIGINAL LOOP APPROACH ---

    for (int i = 0; i < first.length(); i++)
    {
        if (first[i] == second[i])
        {
            continue;
        }
        else if (first[i] < second[i])
        {
            cout << "-1" << endl;
            return 0;
        }
        else if (first[i] > second[i])
        {
            cout << "1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;
    return 0;
    */
}