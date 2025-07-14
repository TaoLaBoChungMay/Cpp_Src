#include <vector>
#include <iostream>

using namespace std;

int main()
{
    string text;
    cin >> text;
    int b = 0, a = 0, l = 0, o = 0, n = 0;
    for (auto const c : text)
    {
        if (c == 'b')
            b++;
        else if (c == 'a')
            a++;
        else if (c == 'l')
            l++;
        else if (c == 'o')
            o++;
        else if (c == 'n')
            n++;
    }
    l /= 2;
    o /= 2;
    int dou = min(l, o);
    int single = min(b, min(a, n));
    cout << min(dou, single);
}