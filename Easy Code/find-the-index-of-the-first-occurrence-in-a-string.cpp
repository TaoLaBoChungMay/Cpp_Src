#include <iostream>
#include <string>

using namespace std;

int main()
{
    string haystack, needle;

    cin >> haystack >> needle;
    int j = 0;
    for (int i = 0; i < haystack.size(); i++)
    {
        if (haystack[i] == needle[j])
        {
            j++;
            if (j == needle.size())
            {
                cout << i;
                return 0;
            }
        }
    }
    cout << "-1";
    return 0;
}