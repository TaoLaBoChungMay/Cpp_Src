#include <iostream>
#include <vector>

using namespace std;

// Trái - Phải  -  Trên - Dưới
vector<vector<int>> dirs = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

void dfs(vector<vector<int>> &map, int r, int c, vector<vector<bool>> &visited)
{
    visited[r][c] = true;
    for (auto dir : dirs) // Bắt đầu duyệt từng hướng
    {
        int Nr = r + dir[0];
        int Nc = c + dir[1];
        if (Nc < 0 || Nr < 0 || Nr > map.size() || Nc >= map[0].size())
            continue;
        if (visited[Nr][Nc] || map[r][c] > map[Nr][Nc])
            continue;

        dfs(map, Nr, Nc, visited);
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<int>> heights(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> heights[i][j];

    m = heights.size();
    n = heights[0].size();

    // Pacific ở góc trên và trái
    vector<vector<bool>> pac(m, vector<bool>(n, false));

    for (int i = 0; i < n; i++) // Hàng trên
        dfs(heights, 0, i, pac);
    for (int i = 0; i < m; i++) // Cạnh trái
        dfs(heights, i, 0, pac);

    // Atlantic ở góc dưới và trái
    vector<vector<bool>> alt(m, vector<bool>(n, false));

    for (int i = 0; i < n; i++) // Hàng dưới
        dfs(heights, m - 1, i, alt);
    for (int i = 0; i < m; i++) // Cạnh trái
        dfs(heights, i, n - 1, alt);

    vector<vector<int>> res;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (pac[i][j] && alt[i][j])
            {
                res.push_back({i, j});
            }
        }
    }

    for (auto &p : res)
        cout << p[0] << " " << p[1] << endl;

    return 0;
}
