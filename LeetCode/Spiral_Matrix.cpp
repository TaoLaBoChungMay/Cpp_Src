#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(m, vector<int>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    vector<int> spiral;
    // n : length matrix
    // m : width matrix
    int left = 0, right = n - 1;
    int top = 0, bot = m - 1;
    int i = 0, j = 0;
    while (left <= right && top <= bot)
    {
        // Traverse right
        for (int j = left; j <= right; j++)
            spiral.push_back(matrix[top][j]);
        top++;

        // Traverse down
        for (int i = top; i <= bot; i++)
            spiral.push_back(matrix[i][right]);
        right--;

        // Traverse left
        if (top <= bot)
        {
            for (int j = right; j >= left; j--)
                spiral.push_back(matrix[bot][j]);
            bot--;
        }

        // Traverse up
        if (left <= right)
        {
            for (int i = bot; i >= top; i--)
                spiral.push_back(matrix[i][left]);
            left++;
        }
    }

    for (auto const k : spiral)
    {
        cout << k << " ";
    }
}