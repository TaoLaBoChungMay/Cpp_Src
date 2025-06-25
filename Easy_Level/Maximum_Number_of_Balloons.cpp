#include <iostream>

using namespace std;

int main()
{
    string text;
    int b = 0, a = 0, l = 0, o = 0, n = 0;
    for (auto const c : text)
    {
        if (c == 'b')
        {
            b++;
        }
        else if (c == 'a')
            a++;
        else if (c == 'l')
            l++;
        else if (c == 'o')
            o++;
        else if (c == 'n')
            n++;
    }
    return min(n, min(o / 2, min(b, min(a, l / 2))));
}