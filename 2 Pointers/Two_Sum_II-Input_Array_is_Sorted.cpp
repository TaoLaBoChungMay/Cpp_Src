#include <iostream>
#include <vector>

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

    int left = 0, right = nums.size() - 1;

    while (left < right)
    {
        if (nums[left] + nums[right] == target)
            return {left + 1, right + 1};
        else if (nums[left] + nums[right] < target)
            left++;
        else
            right--;
    }
    return {1, 2};
}