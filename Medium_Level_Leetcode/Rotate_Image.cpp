#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++) // j=i+1 đảm bảo mỗi vị trí được đảo 1 lần
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end);
    }
}