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
        int s;
        cin >> s;
        nums.push_back(s);
    }
    int j = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] != nums[i])
        {
            nums[j] = nums[i];
            j++;
        }
    }
    return j;
}