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
    vector<int> answer;
    int i = 0;
    while (i < nums.size())
    {
        int start = nums[i];
        while (i < nums.size() - 1 && nums[i] + 1 == nums[i + 1])
            i++;
        if (start != nums[i])
        {
            answer.push_back(start);
            // cout << start << " ";
            answer.push_back(nums[i]);
            // cout << nums[i] << " ";
        }
        else
        {
            answer.push_back(start);
            // cout << start << " ";
        }
        i++;
    }

    for (auto const k : answer)
    {
        cout << k << " ";
    }
}