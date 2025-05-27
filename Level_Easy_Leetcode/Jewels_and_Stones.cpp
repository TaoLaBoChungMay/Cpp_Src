#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;

int main()
{
    string jewels, stones;
    cin >> jewels >> stones;

    unordered_map<char, int> mp;

    for (auto const c : jewels)
    {
        mp[c]++;
    }
    int cnt = 0;
    for (int i = 0; i < stones.size(); i++)
    {
        if (mp.find(stones[i]) != mp.end())
            cnt++;
    }

    cout << cnt;
}