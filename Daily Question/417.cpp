#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> dirs = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

void dfs(int r, int c, vector<vector<int>> &map, vector<vector<bool>> &visited)
{
    visited[r][c] = true;
    for (auto dir : dirs)
    {
        int nr = r + dir[0];
        int nc = c + dir[1];

        if (nr < 0 || nc < 0 || nr >= map[0].size() || nc >= map.size()) // Vượt biên
            continue;
        if (map[nr][nc] < map[r][c])
            continue;

        if (visited[nr][nc])
            continue;

        dfs(nr, nc, map, visited);
    }
}

int main()
{
    int n, m;

    cin >> m >> n;
    vector<vector<int>> height(m, vector<int>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> height[i][j];

    // Pac : Trên và trái
    vector<vector<bool>> Pac(m, vector<bool>(n, false));

    for (int i = 0; i < n; i++) // Hàng trên cùng
        dfs(0, i, height, Pac);

    for (int i = 0; i < m; i++) // Cạnh trái
        dfs(i, 0, height, Pac);

    // Alt : Trên và trái
    vector<vector<bool>> Alt(m, vector<bool>(n, false));

    for (int i = 0; i < m; i++) // Cạnh phải
        dfs(i, n - 1, height, Alt);

    for (int i = 0; i < n; i++) // Hàng dưới cùng
        dfs(m - 1, i, height, Alt);

    vector<vector<int>> pacificAtlantic;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (Pac[i][j] && Alt[i][j])
            {
                pacificAtlantic.push_back({i, j});
            }

    return pacificAtlantic;
}