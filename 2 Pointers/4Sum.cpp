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
    vector<vector<int>> quadra;
    if (nums.size() < 3)
    {
        return quadra;
    }
    sort(nums.begin(), nums.end());
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
                int sum = nums[i] + nums[left] + nums[right] + nums[j];
                if (sum == target)
                {
                    quadra.push_back({nums[i], nums[j], nums[left], nums[right]});
                    cout << nums[i] << " " << nums[j] << " " << nums[left] << " " << nums[right];
                }

                else if (sum > target)
                    right--;
                else
                    left++;
            }
        }
    }
}