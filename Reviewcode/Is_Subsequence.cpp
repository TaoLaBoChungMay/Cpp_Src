#include <iostream>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    if (s == t)
        return 1;
    int i = 0, j = 0;
    while (j < t.length())
    {
        if (s[i] == t[j])
            i++;
        if (i == s.length())
            return 1;
        j++;
    }
    return 0;
}