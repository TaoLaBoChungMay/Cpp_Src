#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    int numRows;
    cin >> s >> numRows;
    int current = 0, step = 1;
    vector<string> Zigzag(numRows);
    for (auto const c : s)
    {
        Zigzag[current].push_back(c);
        if (current == 0)
            step = 1;
        else if (current == numRows - 1)
            step = -1;
        current += step;
    }
    string result = "";
    for (auto const c : Zigzag)
    {
        result += c;
    }
    cout << result;
}