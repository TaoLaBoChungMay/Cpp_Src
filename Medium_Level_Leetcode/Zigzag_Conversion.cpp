#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    int numRows;
    cin >> s >> numRows;
    int step = 1, current = 0;
    vector<string> a(numRows);
    for (auto const c : s)
    {
        a[current].push_back(c);
        if (current == 0)
            step = 1;
        else if (current == numRows - 1)
            step = -1;
        current += step;
    }
    string result = "";
    for (auto const c : a)
        result += c;
    cout << result;
}