#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<string> strs;

    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        strs.push_back(x);
    }
    int Min_Length = INT_MAX;
    for (const string &s : strs)
        Min_Length = min(Min_Length, int(s.length()));
    int i = 0;
    while (i < Min_Length)
    {
        for (const string &s : strs)
            if (s[i] != strs[0][i])
            {
                cout << strs[0].substr(0, i);
                return 0;
            }

        i++;
    }
    return 0;
}
