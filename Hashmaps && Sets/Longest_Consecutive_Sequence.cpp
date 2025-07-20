#include <vector>
#include <iostream>
#include <unordered_set>
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
    int longest = 0;
    unordered_set<int> set(nums.begin(), nums.end());

    for (int nums : set)
    {
        // Kiểm tra xem nums -1 có tồn tại trong mảng không
        // Nếu có thì bỏ qua vì nó chưa phải là số bắt đầu của 1 chuỗi liên tiếp
        // Nếu không thì nó có thể là số bắt đầu của 1 chuỗi liên tiếp
        int steak = 0;
        if (set.find(nums - 1) == set.end())
        {
            int next = nums; // Có thể là đầu tiên của 1 chuỗi liên tiếp và số đó nhỏ nhất
            steak = 0;
            while (set.find(next) != set.end())
            {
                steak++;
                next++;
            }
        }
        longest = max(longest, steak);
    }

    cout << longest;
}