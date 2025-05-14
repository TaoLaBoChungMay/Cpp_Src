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
    if (nums.size() <= 2)
    {
        for (auto const k : nums)
        {
            cout << k << " ";
        }
        return 0;
    }

    int j = 2;
    for (int i = 2; i < nums.size(); i++)
    {
        if (nums[i] != nums[i - 2])
        {
            nums[j] = nums[i];
            j++;
        }
    }

    for (auto const k : nums)
    {
        cout << k << " ";
    }
}