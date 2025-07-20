#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < nums.size(); i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    vector<vector<int>> three_Sum;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int left = i + 1, right = nums.size() - 1;
        while (left < right)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int sum = nums[left] + nums[right] + nums[i];
            if (sum ==)
            {
                three_Sum.push_back({nums[left], nums[right], nums[i]});
                left++;
                right--;
                while (left < right && nums[left] == nums[left - 1])
                    left++;

                while (left < right && nums[right] == nums[right + 1])
                    right--;
            }
            else if (sum < 0)
                left++;
            else
                right--;
        }
    }
    return three_Sum;
}