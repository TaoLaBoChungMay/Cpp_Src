#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string jewels, stones;

    cin >> jewels >> stones;
    unordered_map<char, int> mpp;
    for (auto const s : stones)
    {
        mpp[s]++;
    }
    int total = 0;
    for (auto const s : jewels)
    {
        if (mpp.find(s) != mpp.end())
        {
            total += mpp[s];
        }
    }
    return total;
}