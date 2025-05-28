#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string jewels, stones;
    cin >> jewels >> stones;
    unordered_map<char, int> mpp;
    for (auto const c : jewels)
    {
        mpp[c]++;
    }
    int count = 0;
    for (int i = 0; i < stones.size(); i++)
    {
        if (mpp.find(stones[i]) != mpp.end())
            count++;
    }
    cout << count;
}