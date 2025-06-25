#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int total = 0;
    int roman[256];
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;
    for (int i = 0; i < s.length(); i++)
    {
        if (roman[s[i]] >= roman[s[i + 1]])
        {
            total += roman[s[i]];
        }
        else
            total -= roman[s[i]];
    }
    cout << total;
}