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

    int j = 1, cnt = 1; // j start index 1 because 'array start index 0'
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 1]) // check if prefix and suffix same value
            cnt++;
        else
            cnt = 1; // If nums[i] !=nums[i-1] reset count
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