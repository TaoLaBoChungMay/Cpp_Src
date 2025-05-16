#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s, result = "";
    int numRows;
    cin >> s >> numRows;
    int current = 0;
    int step = 1;
    vector<string> ZigZag(numRows);

    for (char c : s)
    {
        ZigZag[current] += c;
        if (current == 0)
            step = 1;
        else if (current == numRows - 1)
            step = -1;
        current += step;
    }
    for (const string &row : ZigZag)
        result += row;
    cout << result;
}