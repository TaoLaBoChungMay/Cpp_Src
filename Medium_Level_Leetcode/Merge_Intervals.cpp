#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int begin = intervals[0][0];
    int end = intervals[0][1];
    vector<vector<int>> merge;
    for (int i = 1; i < intervals.size(); i++)
    {
        if (end >= intervals[i][0] && end <= intervals[i][1])
            end = intervals[i][1];
        else if (end <= intervals[i][0])
        {
            merge.push_back({begin, end});
            begin = intervals[i][0];
            end = intervals[i][1];
        }
    }
    merge.push_back({begin, end});
    return merge;
}