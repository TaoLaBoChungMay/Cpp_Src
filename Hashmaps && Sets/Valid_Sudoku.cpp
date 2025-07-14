#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    vector<vector<char>> board(9, vector<char>(9));

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            cin >> board[i][j];
        }
    }

    // Check col and row
    for (int i = 0; i < 9; i++)
    {
        set<char> row, col;
        int count_row = 0, count_col = 0;
        for (int j = 0; j < 9; j++) // j không nên bắt đầu từ vị trí thứ i+1 vì sẽ bị bỏ qua trường hợp duplicates => sẽ bị sai
        {
            if (board[i][j] != '.')
            {
                row.insert(board[i][j]);
                count_row++;
            }
            if (board[j][i] != '.')
            {
                col.insert(board[j][i]);
                count_col++;
            }
        }
        if (count_col != col.size() || count_row != row.size())
        {
            cout << "F";
            return 0;
        }
    }

    // Check board 3x3
    vector<vector<int>> starts = {{0, 0}, {0, 3}, {0, 6}, {3, 0}, {3, 3}, {3, 6}, {6, 0}, {6, 3}, {6, 6}};

    for (auto const start : starts)
    {
        set<char> subboard;
        int count_subboard = 0;
        for (int i = start[0]; i < start[0] + 3; i++)
        {
            for (int j = start[1]; j < start[1] + 3; j++)
            {
                if (board[i][j] != '.')
                {
                    subboard.insert(board[i][j]);
                    count_subboard++;
                }
            }
        }
        if (count_subboard != subboard.size())
        {
            cout << "F";
            return 0;
        }
    }
    cout << "T";
    return 1;
}