#include <vector>
#include <iostream>

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
    // Use candicates algorithm
    int count = 1;
    int result = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (result == nums[i])
            count++;
        else
            count--;
        if (count < 0)
        {
            result = nums[i];
            count = 1;
        }
    }
    cout << result;
}