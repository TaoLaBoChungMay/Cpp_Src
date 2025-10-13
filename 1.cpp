#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;

    cin >> m >> n;
    vector<vector<int>> height(m, vector<int>(n));

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> height[i][j];
}