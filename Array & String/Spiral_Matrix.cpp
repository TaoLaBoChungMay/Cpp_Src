#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Tạo tường để đi theo hình xoắn
    int left = 0, right = matrix[0].size() - 1;
    int top = 0, bot = matrix.size() - 1;

    vector<int> spiralOrder;
    while (left <= right)
    {
        // Chạy sang phải
        for (int i = left; i <= right; i++)
            spiralOrder.push_back(matrix[top][i]);
        top++;
        // Chạy xuông dưới
        for (int i = top; i <= bot; i++)
            spiralOrder.push_back(matrix[i][right]);
        right--;
        if (top <= bot) // tương tự như điều kiện left <=right
        {
            // Chạy qua trái
            for (int i = right; i >= left; i--)
                spiralOrder.push_back(matrix[bot][i]);
            bot--;
        }
        if (left <= right) // so sánh left và right để có thể chạy lên và xuống
        // nhưng cần điều kiện left <=right để đi qua các phần tử 1 lần ở giữa và tránh trùng lặp cách chạy
        {
            // Chạy lên trên
            for (int i = bot; i >= top; i--)
                spiralOrder.push_back(matrix[i][left]);
            left++;
        }
    }

    for (auto const n : spiralOrder)
    {
        cout << n << " ";
    }
    return 0;
}