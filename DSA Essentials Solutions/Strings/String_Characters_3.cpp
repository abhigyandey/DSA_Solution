#include <bits/stdc++.h>
using namespace std;

bool arePermutation(string A, string B)
{
    if (A.length() != B.length())
    {
        return false;
    }

    unordered_map<char,int> freq;

    for (char c : A)
    {
        freq[c]++;
    }

    for (char c : B)
    {
        if (freq[c] == 0)
        {
            return false;
        }
        freq[c]--;
    }

    return true;
}

int main()
{
    string A = "test";
    string B = "ttew";

    /**
    * string A = "abcd";
    * string B = "dcba"; // true test
     */

    cout << (arePermutation(A, B) ? "true" : "false");
    return 0;
}