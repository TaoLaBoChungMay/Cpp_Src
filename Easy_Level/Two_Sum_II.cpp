#include <iostream>
#include <vector>
#include <unordered_map>
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
        {
            cout << left + 1 << " " << right + 1;
            return 0;
        }
        while (nums[left] + nums[right] > target && left < right)
        {
            right--;
        }
        if (nums[left] + nums[right] < target)
        {
            left++;
        }
    }
    cout << 1;
}