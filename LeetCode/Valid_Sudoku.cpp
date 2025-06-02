#include <iostream>
#include <vector>
#include <set>
#include <unordered_set>
using namespace std;

int main()
{
    vector<vector<char>> board(9, vector<char>(9));
    for (int i = 0; i < 9; i++)
    {
        set<char> row, col;
        int r = 0, c = 0;
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] != '.')
            {
                r++;
                row.insert(board[i][j]);
            }
            if (board[j][i] != '.')
            {
                c++;
                col.insert(board[j][i]);
            }
        }
        if (row.size() != r || col.size() != c)
            return 0;
    }

    // Valid subbox 3x3

    vector<vector<int>> starts = {{0, 0}, {0, 3}, {0, 6}, {3, 0}, {3, 3}, {3, 6}, {6, 0}, {6, 3}, {6, 6}};

    for (auto const start : starts)
    {
        set<int> sub;
        int dem = 0;
        for (int i = start[0]; i < start[0] + 3; i++)
        {
            for (int j = start[1]; j < start[1] + 3; j++)
            {
                if (board[i][j] != '.')
                {
                    dem++;
                    sub.insert(board[i][j]);
                }
            }
        }
        if (dem != sub.size())
            return 0;
    }

    return 1;
}
