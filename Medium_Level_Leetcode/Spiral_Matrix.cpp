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
    int left = 0, right = n - 1;
    int top = 0, bot = m - 1;
    vector<int> spiral;
    while (left <= right && top <= bot)
    {
        // Traverse right
        for (int i = left; i <= right; i++)
        {
            spiral.push_back(matrix[top][i]);
        }
        top++;

        // Traverse down
        for (int i = top; i <= bot; i++)
        {
            spiral.push_back(matrix[i][right]);
        }
        right--;

        if (top <= bot)
        {
            // Traverse go left
            for (int i = right; i >= left; i--)
            {
                spiral.push_back(matrix[bot][i]);
            }
            bot--;
        }
        if (left <= right)
        {
            // Traverse go up
            for (int i = bot; i >= top; i--)
            {
                spiral.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    for (auto const n : spiral)
    {
        cout << n << " ";
    }
    return 0;
}