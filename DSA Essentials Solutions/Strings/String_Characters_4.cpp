#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string A)
{
    set <char> S;

    for (char i : A)
    {
        S.insert(i);
    }

    string result = "";

    for (char i : S)
    {
        result += i;
    }

    return result;
}

int main()
{
    string s = "geeksforgeeks";
    cout << removeDuplicates(s);
    return 0;
}