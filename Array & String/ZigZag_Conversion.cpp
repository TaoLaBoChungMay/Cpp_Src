#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int numRows;
    cin >> numRows;
    vector<string> zigzag(numRows);
    if (numRows <= 1)
    {
        cout << s;
        return 0;
    }
    int current = 0;
    int step = 1;
    for (int i = 0; i < s.length(); i++)
    {
        zigzag[current] += s[i];
        if (current == 0)
            step = 1;
        else if (current == numRows - 1)
            step = -1;
        current += step;
    }
    string result = "";
    for (auto const s : zigzag)
    {
        cout << s;
    }
    return 0;
}