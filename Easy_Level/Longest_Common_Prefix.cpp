#include <iostream>
#include <vector>

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
    int Length = 1e5;
    for (int i = 0; i < strs.size(); i++)
        Length = min(Length, int(strs[i].length()));

    for (int i = 0; i < Length; i++)
    {
        for (auto const s : strs)
        {
            if (s[i] != strs[0][i])
            {
                return strs[0].substr(0, i);
            }
        }
    }
    return strs[0].substr(0, i);
}