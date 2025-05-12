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
        string s;
        cin >> s;
        strs.push_back(s);
    }
    int Min_Length = INT_MAX;
    for (int i = 0; i < strs.size(); i++)
    {
        Min_Length = min(Min_Length, int(strs[i].size()));
    }

    int i = 0;
    while (i < Min_Length)
    {
        for (const string s : strs)
            if (s[i] != strs[0][i])
                cout << strs[0].substr(0, i);
        i++;
    }
    cout << strs[0].substr(0, i);
}