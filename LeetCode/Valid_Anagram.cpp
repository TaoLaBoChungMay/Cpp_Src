#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    vector<int> a(s.length());
    if (s.length() != t.length())
    {
        return 0;
    }
    for (auto const c : t)
    {
        a[c - 'a']++;
    }
    for (auto const c : s)
    {
        a[c - 'a']--;
    }
    for (auto const c : a)
    {
        if (c != 0)
        {
            return 0;
        }
    }
    return 1;
}