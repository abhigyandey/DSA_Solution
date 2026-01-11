#include <bits/stdc++.h>
using namespace std;

string findvowel(string s)
{
    string result = "";
    string vowels = "aeiou";

    for (char i : s)
    {
        if (vowels.find(i) != string::npos)
        {
            result += i;
        }
    }

    return result;
}

int main()
{
    string s = "aeoibsddaieioudb";
    cout << findvowel(s);
    return 0;
}