#include <bits/stdc++.h>
using namespace std;

bool CompareByPrice(const pair<string,int>&a, const pair<string,int>&b)
{
    return a.second < b.second;
}

bool CompareByName(const pair<string,int>&a, const pair<string,int>&b)
{
    return a.first < b.first;
}

vector<pair<string,int>> SortDict(vector<pair<string,int>> &dict, string &sortby)
{
    if (sortby == "price")
    {
        sort(dict.begin(), dict.end(), CompareByPrice);
    }
    else if (sortby == "name")
    {
        sort(dict.begin(), dict.end(), CompareByName);
    }

    return dict;
}

void PrintPositions(vector<pair<string,int>> &dict)
{
    cout << "{";
    for (int i = 0; i < dict.size(); i++)
    {
        cout << "(" << dict[i].first << ":" << dict[i].second << ")";
        if (i < dict.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "}" << endl;
}

int main()
{
    vector<pair<string, int>> dict = {
        {"Mango", 100},
        {"Guava", 70},
        {"Grapes", 40},
        {"Apple", 60},
        {"Banana", 30}
    };

    cout << "Printing Positions:" << endl;
    PrintPositions(dict);

    cout << endl;

    string sortBy = "price";
    cout << "Sorting Positions on the basis of the price:" << endl;

    dict = SortDict(dict, sortBy);
    PrintPositions(dict);

    cout << endl;

    sortBy = "name";
    cout << "Sorting Positions on the basis of the name:" << endl;
    dict = SortDict(dict, sortBy);
    PrintPositions(dict);

    return 0;
}