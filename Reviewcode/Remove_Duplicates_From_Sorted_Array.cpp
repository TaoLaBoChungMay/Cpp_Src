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
    int j = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[j] != nums[i])
        {
            j++;
            nums[j] = nums[i];
        }
    }
}