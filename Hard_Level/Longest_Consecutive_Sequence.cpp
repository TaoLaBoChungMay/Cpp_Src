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
        mpp[n] = false;
    int Max_Length = 0;

    for (auto const n : nums)
    {
        int length = 1;
        // CHeck if forward sequence
        int nextNum = n + 1;
        while (mpp.find(nextNum) != mpp.end() && mpp[nextNum] == false)
        {
            mpp[nextNum] = true;
            length++;
            nextNum++;
        }
        // CHeck if pre sequence
        int preNum = n - 1;
        while (mpp.find(preNum) != mpp.end() && mpp[preNum] == false)
        {
            mpp[preNum] = true;
            length++;
            preNum--;
        }
        Max_Length = max(Max_Length, length);
    }
    cout << Max_Length;
}
