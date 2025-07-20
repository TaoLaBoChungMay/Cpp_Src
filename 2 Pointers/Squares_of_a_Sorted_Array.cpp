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
    vector<int> sortedSquares;
    while (left <= right)
    {
        if (abs(nums[left]) > abs(nums[right]))
        {
            sortedSquares.push_back(nums[left] * nums[left]);
            left++;
        }
        else
        {
            sortedSquares.push_back(nums[right] * nums[right]);
            right--;
        }
    }
    revere(sortedSquares.begin(), sortedSquares.end());
    return sortedSquares;
}