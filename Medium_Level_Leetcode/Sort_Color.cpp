#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> nums;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int j = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        j = i;
        while (j > 0 && nums[j - 1] > nums[j])
        {
            swap(nums[j], nums[j - 1]);
            --j;
        }
    }
}