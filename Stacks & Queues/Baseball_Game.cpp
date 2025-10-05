#include <iostream>
#include <vector>

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

    vector<int> result;
    int sum = 0;
    for (auto const c : operations)
    {
        if (c == "+")
        {
            int a = result[result.size() - 1];
            int b = result[result.size() - 2];
            result.push_back(a + b);
            sum += a + b;
        }
        else if (c == "D")
        {
            int a = result[result.size() - 1];
            sum += a * 2;
            result.push_back(a * 2);
        }
        else if (c == "C")
        {
            sum -= result[result.size() - 1];
            result.pop_back();
        }
        else
        {
            int x = stoi(c);
            sum += x;
            result.push_back(x);
        }
    }
    cout << sum;
}