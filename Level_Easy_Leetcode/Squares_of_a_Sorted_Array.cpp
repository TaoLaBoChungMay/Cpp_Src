#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
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
    vector<int> sorted(nums.size());
    int i = 0, j = nums.size() - 1;
    int index = nums.size() - 1;
    while (i <= j)
    {
        if (abs(nums[i]) < abs(nums[j]))
        {
            sorted[index--] = nums[j] * nums[j];
            j--;
        }
        else
        {
            sorted[index--] = nums[i] * nums[i];
            i++;
        }
    }

    for (auto const n : sorted)
    {
        cout << n << " ";
    }

    return 0;
}