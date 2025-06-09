#include <iostream>
#include <vector>
#include <map>
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
    map<int, int> mpp;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 2 == 0)
        {
            mpp[nums[i]]++;
        }
    }
    int freq = -1;
    int key = 0;
    for (auto const n : mpp)
    {
        if (n.second > freq)
        {
            freq = n.second;
            key = n.first;
        }
    }
    cout << key;
}