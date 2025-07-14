#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
    string ransomNote, magazine;
    cin >> ransomNote >> magazine;
    // tạo vector gồm 26 chữ cái
    vector<int> a(26, 0);

    for (auto const c : magazine)
        a[c - 'a']++;

    for (auto const c : ransomNote)
    {
        a[c - 'a']--;
        if (a[c - 'a'] < 0)
        {
            return false;
        }
    }
    return true;
}