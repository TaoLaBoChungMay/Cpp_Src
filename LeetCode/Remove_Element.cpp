#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, val;
    cin >> n >> val;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    for (int i = 0; i < j; i++)
    {
        cout << nums[i] << " ";
    }
}