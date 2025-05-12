#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> intervals(n, vector<int>(2));

    for (int i = 0; i < n; i++)
        cin >> intervals[i][0] >> intervals[i][1];

    vector<vector<int>> answer;
    sort(intervals.begin(), intervals.end());
    int start = intervals[0][0];
    int end = intervals[0][1];
    for (int i = 1; i < intervals.size(); i++)
    {
        if (end >= intervals[i][0] && end < intervals[i][1])
        {
            end = intervals[i][1];
        }
        else if (end < intervals[i][0])
        {
            answer.push_back({start, end});
            start = intervals[i][0];
            end = intervals[i][1];
        }
    }
    answer.push_back({start, end});
    for (auto const k : answer)
    {
        cout << k[0] << "," << k[1] << " ";
    }
}