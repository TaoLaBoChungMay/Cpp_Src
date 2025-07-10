#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, val;
    cin >> n >> val;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        nums.push_back(s);
    }
    int j = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != val)
        {
            nums[j++] = nums[i];
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}