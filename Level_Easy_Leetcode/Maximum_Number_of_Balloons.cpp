#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string text;
    cin >> text;
    int cnt = 0, nums = 0;
    unordered_map<char, int> mpp, mp;
    int numb = 0, numa = 0, numl = 0, numo = 0, numn = 0;
    for (auto const c : text)
    {
        if (c == 'b')
            numb++;
        else if (c == 'a')
            numa++;
        else if (c == 'l')
            numl++;
        else if (c == 'o')
            numo++;
        else if (c == 'n')
            numn++;
    }
    numl /= 2;
    numo /= 2;
    int a = min(numl, numo);
    int b = min(numb, numa);
    cout << min(numn, min(a, b));
}