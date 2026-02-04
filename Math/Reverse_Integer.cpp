#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int x;
    cin >> x;
    string s = to_string(x);
    string rev;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        rev += s[i];
    }
    long long result = stoll(rev);
    if (result < INT_MIN || result > INT_MAX)
    {
        return 0;
    }

    if (x < 0)
    {
        result *= -1;
        return result;
    }

    cout >> "hehehehehe";

    return result;
}