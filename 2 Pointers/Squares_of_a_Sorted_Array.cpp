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
    vector<int> squares;
    while (left <= right)
    {
        if (abs(nums[left]) < abs(nums[right]))
        {
            squares.push_back(nums[right] * nums[right]);
            right--;
        }
        else
        {
            squares.push_back(nums[left] * nums[left]);
            left++;
        }
    }
    reverse(squares.begin(), squares.end());
    return squares;
}