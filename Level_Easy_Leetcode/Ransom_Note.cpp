#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    string ransomNote, magazine;
    cin >> ransomNote >> magazine;

    sort(ransomNote.begin(), ransomNote.end());
    sort(magazine.begin(), magazine.end());
    int i = 0;
    for (auto const c : magazine)
    {
        if (c == ransomNote[i])
        {
            i++;
        }
    }
    return i == ransomNote.size();
}