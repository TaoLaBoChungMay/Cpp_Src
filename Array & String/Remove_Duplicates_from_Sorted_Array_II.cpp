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
    int j = 1;
    int count = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] == nums[i])
            count++;
        else
            count = 1;
        if (count <= 2)
        {
            nums[j] = nums[i];
            j++;
        }
    }
    cout << j;
}
