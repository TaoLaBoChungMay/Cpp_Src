#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
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
    int Max_Length = 0;
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]] = false;
    }
    for (auto const n : nums)
    {
        // Check forward
        int next = n + 1;
        int l = 1;
        while (mpp.find(next) != mpp.end() && mpp[next] == false)
        {
            mpp[next] = true;
            next++;
            l++;
        }
        // Check pre
        int pre = n - 1;
        while (mpp.find(pre) != mpp.end() && mpp[pre] == false)
        {
            mpp[pre] = true;
            pre--;
            l++;
        }
        Max_Length = max(Max_Length, l);
    }
    cout << Max_Length;
}
