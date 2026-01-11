#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(string s)
{
    int result = 0;

    for (char ch : s)
    {
        result = result * 2 + (ch - '0');
    }

    return result;
}

int main()
{
    string s = "111";
    cout << binaryToDecimal(s);
    return 0;
}