#include <iostream>
#include <vector>
// & : truyền tham biến vào để thay đổi giá trị và ảnh hưởng đến giá trị thật trong bộ nhớ
using namespace std;
// Trái - Phải - Trên - Dưới
vector<vector<int>> dirs = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

bool canReach(int mid, vector<vector<int>> &grid, int r, int c, vector<vector<bool>> &visited)
{
    visited[r][c] = true;
    if (r == grid.size() - 1 && c == grid.size() - 1)
    {
        return true;
    }

    for (auto dir : dirs)
    {
        int nr = r + dir[0];
        int nc = c + dir[1];

        if (nc < 0 || nr < 0 || nr >= grid.size() || nc >= grid.size())
            continue;

        if (visited[nr][nc])
            continue;
        if (grid[nr][nc] <= mid && canReach(mid, grid, nr, nc, visited))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }

    int high = n * n - 1;
    int low = grid[0][0];

    while (low < high) // low == high : đó là kết quả cuối cùng mà T(min) đến được đích
    {
        int mid = (high + low) / 2;
        vector<vector<bool>> visited(n, vector<bool>(n, false));
        if (canReach(mid, grid, 0, 0, visited)) // canReach ==true => Đã có số đến được đích
        {
            high = mid; // Tìm xem còn số nào nhỏ hơn vẫn có thể đến đích không
        }
        else
        {
            low = mid + 1; // Số vẫn chưa đủ lớn nên tăng low lên để tìm số có thể đạt được đến đích
        }
    }

    cout << low;
    return 0;
}
