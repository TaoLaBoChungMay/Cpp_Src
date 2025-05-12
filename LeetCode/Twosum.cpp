#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums;

    int target, n, x, k, i, mid;

    vector<pair<int, int>> vt;

    cin >> n >> target;

    for (i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
        vt.push_back({nums[i], i});
    }

    sort(vt.begin(), vt.end());

    for (i = 0; i < nums.size(); i++)
    {
        int left = i + 1;
        int right = vt.size() - 1;
        while (left <= right)
        {
            mid = (left + right) / 2;
            if (vt[mid].first + vt[i].first == target)
            {
                cout << vt[mid].second << " " << vt[i].second;
                return 0;
            }
            else if (vt[mid].first < target - vt[i].first)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
}