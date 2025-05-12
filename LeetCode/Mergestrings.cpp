#include <iostream>

using namespace std;

int main()
{
    string s1, s2, result = "";

    cin >> s1 >> s2;

    int i = 0;
    while (i < s1.length() || i < s2.length())
    {
        if (i < s1.length())
            result += s1[i];
        if (i < s2.length())
            result += s2[i];
        i++;
    }

    cout << result;
    return 0;
}