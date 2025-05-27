#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    bool firstrow = false, firstcol = false;

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
                if (j == 0)
                {
                    firstcol = true;
                }
                if (i == 0)
                {
                    firstrow = true;
                }
            }
        }
    }
    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            if (matrix[0][j] == 0 || matrix[i][0] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }

    if (firstrow)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            matrix[0][j] = 0;
        }
    }
    if (firstcol)
    {
        for (int i = 0; i < matrix.size(); i++)
        {
            matrix[i][0] = 0;
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}