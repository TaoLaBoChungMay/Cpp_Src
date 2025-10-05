#include <vector>
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> tokens;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        tokens.push_back(s);
    }

    stack<int> stk;

    for (auto const c : tokens)
    {
        if (c == "+")
        {
            int a = stk.top();
            stk.pop();
            int b = stk.top();
            stk.pop();
            stk.push(a + b);
        }
        else if (c == "-")
        {
            int a = stk.top();
            stk.pop();
            int b = stk.top();
            stk.pop();
            stk.push(b - a);
        }
        else if (c == "*")
        {
            int a = stk.top();
            stk.pop();
            int b = stk.top();
            stk.pop();
            stk.push(a * b);
        }
        else if (c == "/")
        {
            int a = stk.top();
            stk.pop();
            int b = stk.top();
            stk.pop();
            stk.push(b / a);
        }
        else
        {
            int x = stoi(c);
            stk.push(x);
        }
    }

    cout << stk.top();
}