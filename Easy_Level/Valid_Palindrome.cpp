#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int left = 0, right = s.length() - 1;
    while (left <= right)
    {
        while (left < right && !(isalnum(s[left])))
            left++;
        while (left < right && !(isalnum(s[right])))
            right--;
        if (tolower(s[left]) != tolower(s[right]))
            return 0;
        left++;
        right--;
    }
    return 1;
}