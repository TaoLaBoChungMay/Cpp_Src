#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    vector<int> a(26, 0);

    if (s.length() != t.length())
    {
        return 0;
    }

    for (auto const c : s)
    {
        a[c - 'a']++;
    }
    for (auto const c : t)
    {
        a[c - 'a']--;
        if (a[c - 'a'] < 0)
        {
            return 0;
        }
    }
    return 1;
}