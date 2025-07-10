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

    int l = 1;
    vector<int> left;

    for (int i = 0; i < nums.size(); i++)
    {
        left.push_back(l);
        l *= nums[i];
    }
    int r = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        left[i] *= r;
        r *= nums[i];
    }

    for (auto const n : left)
    {
        cout << n << " ";
    }
}