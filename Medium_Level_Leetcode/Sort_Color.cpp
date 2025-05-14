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

    // SelectionSort
    for (int i = 0; i < nums.size() - 1; i++)
    {
        int vt = i;
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[j] < nums[vt])
                vt = j;
        }
        swap(nums[i], nums[vt]);
    }
    for (auto const k : nums)
    {
        cout << k << " ";
    }
    return 0;
}