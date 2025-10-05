#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> heights;
    stack<int> stk;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        heights.push_back(x);
    }
    int maximum_of_histogram = 0;
    int i = 0;
    while (i < heights.size())
    {
        if (stk.empty() || heights[stk.top()] <= heights[i])
        {
            stk.push(i++);
        }
        else
        {
            int cao = heights[stk.top()];
            stk.pop();
            int rong = stk.empty() ? i : i - stk.top() - 1;
            int max_area = cao * rong;
            maximum_of_histogram = max(max_area, maximum_of_histogram);
        }
    }

    while (!stk.empty())
    {
        int cao = heights[stk.top()];
        stk.pop();
        int rong = stk.empty() ? i : i - stk.top() - 1;
        int max_area = cao * rong;
        maximum_of_histogram = max(max_area, maximum_of_histogram);
    }

    cout << maximum_of_histogram;
}