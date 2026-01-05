#include <bits/stdc++.h>
using namespace std;

void MakeZero(vector<vector<int> > &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    bool FirstRowZero = false;
    bool FirstColumnZero = false;

    for (int j = 0; j < n; j++)
    {
        if (matrix[0][j] == 0)
        {
            FirstRowZero = true;
            break;
        }
    }

    for (int i = 0; i < m; i++)
    {
        if (matrix[i][0] == 0)
        {
            FirstColumnZero = true;
            break;
        }
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (matrix[i][0]==0 || matrix[0][j]==0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    if (FirstRowZero)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[0][j] = 0;
        }
    }

    if (FirstColumnZero)
    {
        for (int i = 0; i < m; i++)
        {
            matrix[i][0] = 0;
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    cout << "[";
    for (int i = 0; i < matrix.size(); i++) {
        cout << "[";
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j];
            if (j < matrix[i].size() - 1) cout << ", ";
        }
        cout << "]";
        if (i < matrix.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main()
{
    vector<vector<int>> matrix = {
        {5, 4, 3, 9},
        {2, 0, 7, 6},
        {1, 3, 4, 0},
        {9, 8, 3, 4}
    };

    cout << "Original matrix: ";
    printMatrix(matrix);

    MakeZero(matrix);

    cout << "After making zeroes: ";
    printMatrix(matrix);

}