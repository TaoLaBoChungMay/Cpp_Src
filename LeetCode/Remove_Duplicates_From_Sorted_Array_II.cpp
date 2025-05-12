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
    int cnt = 1, j = 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1])
            cnt++;
        else
            cnt = 1;
        if (cnt <= 2)
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
