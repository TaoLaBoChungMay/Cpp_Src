#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    string ransomNote, magazine;
    cin >> ransomNote >> magazine;

    unordered_map<char, int> mpp;
    for (int i = 0; i < ransomNote.size(); i++)
    {
        mpp[ransomNote[i]]++;
    }
    for (auto const c : magazine)
    {
        if (mpp.find(c) != mpp.end())
        {
            mpp[c]--;
        }
        if (mpp[c] == 0)
        {
            mpp.erase(c);
        }
    }
    return mpp.size() == 0;
}