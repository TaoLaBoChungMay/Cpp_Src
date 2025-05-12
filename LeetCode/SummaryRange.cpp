#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> nums;
    vector<string> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    int start = 0;
    int i = 0;
    while (i < nums.size())
    {
        int start = nums[i];
        // Bỏ qua các số liên tiếp
        while (i < nums.size() - 1 && nums[i] + 1 == nums[i + 1])
            i++;
        // Kiểm tra nếu vị trí bắt đầu không trùng với nums[i]
        if (start != nums[i])
            b.push_back(to_string(start) + "->" + to_string(nums[i]));
        else // các số đứng 1 mình cũng là số liên tiếp
            b.push_back(to_string(start));
        i++;
    }

    for (const auto &k : b)
    {
        cout << k << "        ";
    }

    return 0;
}
