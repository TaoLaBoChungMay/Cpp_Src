#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int numRows;
    string s;
    cin >> s >> numRows;
    if (numRows == 1)
    {
        cout << s;
        return 0;
    }
    vector<string> a(numRows);

    int step = 0;
    int current = 0;

    for (char c : s)
    {
        a[current].push_back(c);
        if (current == 0)
            step = 1;
        else if (current == numRows - 1)
            step = -1;
        current += step;
    }
    string result;
    for (auto const c : a)
    {
        result += c;
    }
    cout << result;
}