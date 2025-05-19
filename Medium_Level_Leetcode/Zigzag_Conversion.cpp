#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numRows;
    string s;
    cin >> s >> numRows;
    int step = 1, current = 0; // Current cho biết vị trí hiện tại ở dòng thứ mấy của numRows
    if (numRows <= 1)          // Khi numRows =1 thì sẽ bị tràn bộ nhớ
    {
        cout << s;
        return 0;
    }
    vector<string> Zigzag(numRows);
    for (char c : s)
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
        cout << result;
    }
}