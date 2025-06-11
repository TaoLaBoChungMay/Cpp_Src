#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    for (int i = 0; i < 9; i++)
    {
        set<char> row, col;
        int r = 0, c = 0;
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] != '.')
            {
                row.insert(board[i][j]);
                r++;
            }
            if (board[j][i] != '.')
            {
                col.insert(board[j][i]);
                c++;
            }
        }
        if (col.size() != c || row.size() != r)
            return 0;
    }

    vector<vector<int>> starts = {{0, 0}, {0, 3}, {0, 6}, {3, 0}, {3, 3}, {3, 6}, {6, 0}, {6, 3}, {6, 6}};

    for (auto const start : starts)
    {
        set<char> sub;
        int dem = 0;
        for (int i = start[0]; i < start[0] + 3; i++)
        {
            for (int j = start[1]; j < start[1] + 3; j++)
            {
                if (board[i][j] != '.')
                {
                    sub.insert(board[i][j]);
                    dem++;
                }
            }
        }
        if (sub.size() != dem)
        {
            return 0;
        }
    }
    return 1;
}