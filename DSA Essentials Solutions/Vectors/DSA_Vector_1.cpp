#include <bits/stdc++.h>
using namespace std;

bool CompareDist(const pair<int, int> &a, const pair<int, int> &b)
{
    int distA = a.first*a.first + a.second*a.second;
    int distB = b.first*b.first + b.second*b.second;
    return distA < distB; // Non-Decreasing Order
}

vector<pair<int,int>> SortPositions(vector<pair<int,int>> pos)
{
    sort(pos.begin(), pos.end(), CompareDist);
    return pos;
}

void PrintPositions(vector<pair<int,int>> pos)
{
    cout << "{";
    for (int i = 0; i < pos.size(); i++)
    {
        cout << "(" << pos[i].first << "," << pos[i].second << ")";
        if (i < pos.size() - 1)
            cout << ",";
    }
    cout << "}";
}
int main()
{
    vector<pair<int, int>> pos = {{2, 3}, {1, 2}, {3, 4}, {2, 4}, {1, 4}};
    cout << "Printing Positions:" << endl;
    PrintPositions(pos);

    cout << endl;

    cout << "Sorting Positions:" << endl;
    PrintPositions(SortPositions(pos));
}