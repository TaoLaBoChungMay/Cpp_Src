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

    int i = 0;
    vector<int> summaryRanges;
    while (i < nums.size())
    {
        int begin = nums[i];
        // Tìm số kết thúc của dãy liên tiếp
        while (i < nums.size() - 1 && nums[i] + 1 == nums[i + 1])
            i++;
        int end = nums[i];
        // Nếu begin==end => dãy liên tiếp là begin
        if (begin == end)
            summaryRanges.push_back(begin);
        else
        {
            summaryRanges.push_back(begin);
            summaryRanges.push_back(end);
        }
        i++;
    }

    for (auto const s : summaryRanges)
    {
        cout << s << " ";
    }
    return 0;
}