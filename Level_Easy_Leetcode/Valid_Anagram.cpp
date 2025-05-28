#include <iostream>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int a[100];
    if (s.size() != t.size())
        return 0;
    for (auto const c : s)
        a[c - 'a']++;
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