#include <iostream>
#include <vector>
#include <unordered_map>
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

    vector<vector<string>> groupAnagrams;
    unordered_map<string, vector<string>> mpp;

    for (auto const s : strs)
    {
        string key = s;
        sort(key.begin(), key.end());
        mpp[key].push_back(s);
    }
    for (auto const s : mpp)
    {
        groupAnagrams.push_back(s.second);
    }
    return groupAnagrams;
}