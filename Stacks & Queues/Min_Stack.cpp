#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> minstack;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        minstack.push_back(x);
    }

    stack<int> stk;
    int i = 0;
    while (i < minstack.size())
    {
        if (minstack[i] == "push")
        {
            if (stk.empty() || stk.top() <)
            {
                /* code */
            }
        }
    }

    return 0;
}