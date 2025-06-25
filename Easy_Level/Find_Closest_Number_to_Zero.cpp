#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int closest = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (abs(nums[i]) < abs(closest))
        {
            closest = nums[i];
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (abs(closest) == nums[i])
        {
            return nums[i];
        }
    }
    return closest;
}