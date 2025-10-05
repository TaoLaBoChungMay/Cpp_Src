#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> temperatures;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        temperatures.push_back(x);
    }
    stack<int> stk;
    int i = temperatures.size() - 1;
    vector<int> daily;
    while (i >= 0)
    {
        if (stk.empty())
        {
            daily.push_back(0);
            stk.push(i);
            i--;
        }
        else if (temperatures[i] < temperatures[stk.top()])
        {
            daily.push_back(stk.top() - i);
            stk.push(i);
            i--;
        }
        else
        {
            stk.pop();
        }
    }

    reverse(daily.begin(), daily.end());
    for (auto const n : daily)
    {
        cout << n << " ";
    }
    return 0;
}