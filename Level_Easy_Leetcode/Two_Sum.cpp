#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;

    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    unordered_map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        int k = target - nums[i];
        if (mpp.find(k) != mpp.end())
        {
            cout << i << " " << mpp[k];
            return 0;
        }
        else
            mpp[nums[i]] = i;
    }

    return 0;
}