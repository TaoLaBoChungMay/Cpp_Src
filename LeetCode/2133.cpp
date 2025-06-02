#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    for (int i = 0; i < matrix.size(); i++)
    {
        set<int> col;
        for (int j = 0; j < matrix.size(); j++)
        {
            if (matrix[i][j] < 1 || matrix[i][j] > matrix.size())
                return 0;
            col.insert(matrix[i][j]);
        }
        if (col.size() != matrix.size())
            return 0;
    }
    for (int i = 0; i < matrix.size(); i++)
    {
        set<int> row;
        for (int j = 0; j < matrix.size(); j++)
        {
            if (matrix[j][i] < 1 || matrix[j][i] > matrix.size())
                return 0;
            row.insert(matrix[j][i]);
        }
        if (row.size() != matrix.size())
            return 0;
    }
    return 1;
}