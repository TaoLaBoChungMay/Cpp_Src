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
    vector<vector<int>> triples;
    sort(nums.begin(), nums.end());
    int closest = -1e5;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        int left = i + 1, right = nums.size() - 1;
        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == target)
                return target;
            else if (sum > target)
                right--;
            else
                left++;
            if (abs(sum - target) < abs(closest - target))
                closest = sum;
        }
    }
    return closest;
}