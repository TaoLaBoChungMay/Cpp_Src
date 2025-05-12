#include <iostream>

using namespace std;

int main()
{
    string s, t;

    cin >> s >> t;
    if (s == "" && t == "")
    {
        cout << "YES";
        return 0;
    }

    while (j < t.length())
    {
        if (s[i] == t[j])
            i++;
        j++;
        if (i == s.length())
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}