#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s, t;
    int i = 0, j = 0;
    if (t.empty() && s.empty())
    {
        return true;
    }
    else if (s.empty())
        return false;
    while (i < t.length())
    {
        if (s[j] == t[i])
        {
            j++;
        }
        if (j == s.length())
        {
            return true;
        }
        i++;
    }
    return false;
}