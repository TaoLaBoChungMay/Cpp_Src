#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{
    for (int i = 0; i < matrix.size(); i++)
    {
        set<int> row, col;
        int cnt = 0;
        for (int j = 0; j < matrix.size(); j++)
        {
            row.insert(matrix[i][j]);
            col.insert(matrix[j][i]);
            cnt++;
        }
        if (row.size() != cnt || col.size() != cnt)
            return 0;
    }
    return 1;
}