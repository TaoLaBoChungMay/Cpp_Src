#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> operations;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        operations.push_back(s);
    }
    stack<int> st;
    int i = 0;
    int top1, top2, top;
    while (i < operations.size())
    {
        if (operations[i] == "+")
        {
            top1 = st.top();
            st.pop();
            top2 = st.top();
            st.push(top1);
            st.push(top1 + top2);
        }
        else if (operations[i] == "D")
        {
            top = st.top();
            st.push(top * 2);
        }
        else if (operations[i] == "C")
        {
            top = st.top();
            st.pop();
        }
        else
        {
            st.push(stoi(operations[i]));
        }
        i++;
    }
    int sum = 0;
    while (!st.empty())
    {
        int a = st.top();
        sum += a;
        st.pop();
    }

    cout << sum;
    return 0;
}