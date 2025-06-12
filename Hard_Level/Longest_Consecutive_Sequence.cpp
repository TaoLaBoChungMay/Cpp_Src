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

    unordered_map<int, bool> mpp;
    for (auto const n : nums)
    {
        mpp[n] = false;
    }
    int Max = 0;
    for (auto const n : nums)
    {
        int length = 1;
        // check forward sequence
        int nextNum = n + 1;
        while (mpp.find(nextNum) != mpp.end() && mpp[nextNum] == false)
        {
            mpp[nextNum] = true;
            nextNum++;
            length++;
        }
        // check preNum if possible sequence
        int preNum = n - 1;
        while (mpp.find(preNum) != mpp.end() && mpp[preNum] == false)
        {
            mpp[preNum] = true;
            preNum--;
            length++;
        }
        Max = max(Max, length);
    }
    cout << Max;
}
