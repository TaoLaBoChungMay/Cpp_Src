#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int i = 0, j = 0;
    if (s.empty() && t.empty())
    {
        return true;
    }

    while (j < t.length())
    {
        if (s[i] == t[j])
        {
            i++;
        }
        if (i == s.length())
            return true;
        j++;
    }
    return 0;
}