#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    for (int i = 0; i < 9; i++)
    {
        int r = 0, c = 0;
        set<char> col, row;
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
        if (col.size() != c || row.size() != r)
            return 0;
    }

    // Validate sub 3x3

    vector<pair<int, int>> starts = {{0, 0}, {0, 3}, {0, 6}, {3, 0}, {3, 3}, {3, 6}, {6, 0}, {6, 3}, {6, 6}};
    for (auto const start : starts)
    {
        set<char> sub;
        int cnt = 0;
        for (int i = start.fisrt; i < start.first + 3; i++)
        {
            for (int j = start.second; j < start.second() + 3; j++)
            {
                if (board[i][j] != '.')
                {
                    cnt++;
                    sub.insert(board[i][j]);
                }
            }
        }
        if (cnt != sub.size())
            return 0;
    }
    return 1;
}