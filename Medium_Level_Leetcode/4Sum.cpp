#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    if (nums.size() < 4)
        return result;
    for (int i = 0; i < nums.size() - 3; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        for (int j = i + 1; j < nums.size() - 2; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;
            int left = j + 1, right = nums.size() - 1;
            while (left < right)
            {

                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target)
                {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1])
                        left++;
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                }
                else if (sum > target)
                    right--;
                else
                    left++;
            }
        }
    }

    return result;
}