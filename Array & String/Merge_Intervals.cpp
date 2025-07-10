#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> nums;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> nums[i][j];
        }
    }

    vector<vector<int>> merge;
    int begin = nums[0][0], end = nums[0][1];

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i][0] <= end && end <= nums[i][1])
            end = nums[i][1];
        else
        {
            merge.push_back({begin, end});
            begin = nums[i][0];
            end = nums[i][1];
        }
    }
    merge.push_back({begin, end});
    return merge;
}