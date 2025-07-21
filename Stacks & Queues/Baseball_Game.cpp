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
    int sum = 0;
    int i = 0;
    vector<int> calPoints;
    while (i < operations.size())
    {
        if (operations[i] == "+")
        {
            int a = (calPoints[calPoints.size() - 1]);
            int b = (calPoints[calPoints.size() - 2]);
            calPoints.push_back(a + b);
        }
        else if (operations[i] == "D")
        {
            int c = (calPoints[calPoints.size() - 1]);
            c *= 2;
            calPoints.push_back(c);
        }
        else if (operations[i] == "C")
        {
            calPoints.pop_back();
        }
        else
        {
            int x = stoi(operations[i]);
            calPoints.push_back(x);
        }
        i++;
    }
    for (auto const n : calPoints)
    {
        sum += n;
    }
    cout << sum;
    return 0;
}