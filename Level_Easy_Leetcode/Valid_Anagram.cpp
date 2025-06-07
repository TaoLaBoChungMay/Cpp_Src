#include <iostream>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    if (s.length() != t.length())
    {
        return 0;
    }
    int a[100];
    fill(a, a + 100, 0);
    for (char c : s)
        a[c - 'a']++;

    for (char c : t)
    {
        a[c - 'a']--;
        if (a[c - 'a'] < 0)
            return 0;
    }
    return 1;
}