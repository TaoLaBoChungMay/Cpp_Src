#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string ransomNote, magazine;
    cin >> ransomNote >> magazine;
    int j = 0;
    sort(magazine.begin(), magazine.end());
    sort(ransomNote.begin(), ransomNote.end());
    for (int i = 0; i < magazine.size(); i++)
    {
        if (magazine[i] == ransomNote[j])
        {
            j++;
        }
        if (j == ransomNote.size())
        {
            return 1;
        }
    }
    return 0;
}