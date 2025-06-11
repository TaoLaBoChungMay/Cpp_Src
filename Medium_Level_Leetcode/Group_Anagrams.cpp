#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
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
    map<string, vector<string>> mpp;
    for (auto const s : strs)
    {
        string key = s;
        sort(key.begin(), key.end());
        mpp[key].push_back(s);
    }
    vector<vector<string>> result;
    for (auto const s : mpp)
    {
        result.push_back(s.second);
    }
    for (auto const s : result)
    {
        for (auto const a : s)
        {
            cout << a << " ";
        }
    }
    return 0;
}