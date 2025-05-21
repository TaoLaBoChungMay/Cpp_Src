#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    int n, target;
    vector<int> nums;
    cin >> n >> target;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    unordered_map<int, int> numMap;

    for (int i = 0; i < nums.size(); i++)
    {
        int k = target - nums[i];
        if (numMap.find(k) != numMap.end())
        {
            cout << i << " " << numMap[k];
            return 0;
        }
        numMap[nums[i]] = i;
    }
}