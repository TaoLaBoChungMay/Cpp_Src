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
    int j = 1, cnt = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] == nums[i])
            cnt++;
        else
            cnt = 1;
        if (cnt <= 2)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    cout << j;
}