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
    int left = 0, right = nums.size() - 1;
    vector<int> squares(nums.size());
    int index = nums.size() - 1;
    while (left <= right)
    {
        if (abs(nums[left]) < abs(nums[right]))
        {
            squares[index--] = nums[right] * nums[right];
            right--;
        }
        else
        {
            squares[index--] = nums[left] * nums[left];
            left++;
        }
    }
    return squares;
}