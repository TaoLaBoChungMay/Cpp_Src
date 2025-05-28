#include <iostream>
#include <vector>
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
    unordered_map<int, int> mpp;
    for (auto const c : nums)
    {
        mpp[c]++;
        if (mpp[c] > 1)
        {
            return 1;
        }
    }
    return 0;
}
