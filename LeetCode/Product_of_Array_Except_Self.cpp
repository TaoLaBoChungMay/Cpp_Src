#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums;
    vector<int> result(n);

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    int left = 1;
    int right = 1;
    // calculate left side except nums[i]
    for (int i = 0; i < nums.size(); i++)
    {
        result[i] = left;
        cout << result[i] << " ";
        left *= nums[i];
    }
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        result[i] *= right;
        right *= nums[i];
    }

    // for (auto const k : result)
    //     cout << k << " ";
    return 0;
}