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
    vector<int> ranges;
    int i = 0;
    while (i < nums.size())
    {
        int begin = nums[i];
        while (nums[i] + 1 == nums[i + 1])
        {
            i++;
        }
        int end = nums[i];
        if (begin == end)
        {
            ranges.push_back(begin);
        }
        else
        {
            ranges.push_back(begin);
            ranges.push_back(end);
        }
        i++;
    }

    for (auto const n : ranges)
    {
        cout << n << " ";
    }
}