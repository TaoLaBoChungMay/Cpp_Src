#include <iostream>
#include <vector>
#include <algorithm>
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

    sort(nums.begin(), nums.end());

    for (int i = nums.size(); i >= 2; i--)
    {
        if (nums[i] > nums[i - 1] + nums[i - 2])
        {
            return nums[i] + nums[i - 1] + nums[i - 2];
        }
    }

    return 0;
}