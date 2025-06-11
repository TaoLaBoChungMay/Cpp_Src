#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> intervals(n, vector<int>(2));
    for (int i = 0; i < n; i++)
        cin >> intervals[i][0] >> intervals[i][1];
    sort(intervals.begin(), intervals.end());
    int begin = intervals[0][0];
    int end = intervals[0][1];
    vector<vector<int>> result;
    for (int i = 1; i < intervals.size(); i++)
    {
        if (end >= intervals[i][0] && end < intervals[i][1])
            end = intervals[i][1];
        else if (end < intervals[i][0])
        {
            result.push_back({begin, end});
            begin = intervals[i][0];
            end = intervals[i][1];
        }
    }
    result.push_back({begin, end});
    for (auto const n : result)
    {
        cout << n[0] << " " << n[1];
    }
    return 0;
}