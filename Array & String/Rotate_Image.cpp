#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < matrix.size(); i++)
        for (int j = i + 1; j < matrix.size(); j++)
            swap(matrix[i][j], matrix[j][i]);

    for (int i = 0; i < matrix.size(); i++)
        reverse(matrix[i].begin(), matrix[i].end());
}