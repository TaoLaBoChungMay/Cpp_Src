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
    vector<vector<int>> triples;

    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size() - 2; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int left = i + 1, right = nums.size() - 1;
        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0)
            {
                triples.push_back({nums[left], nums[right], nums[i]});
                left++;
                right--;
                while (left < right && nums[left] == nums[left - 1])
                    left++;
                while (left < right && nums[right] == nums[right + 1])
                    right--;
            }
            else if (sum > 0)
                right--;
            else
                left++;
        }
    }
    for (auto const n : triples)
    {
        cout << n[0] << " " << n[1] << n[2] << " ";
    }
    return 0;
}