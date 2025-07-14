#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    string s, target;
    cin >> s >> target;

    vector<int> freqS(26, 0);
    vector<int> freqTarget(26, 0);
    if (target.empty())
    {
        cout << "0";
        return 0;
    }

    int Max_Copies = INT_MAX;

    for (auto const c : s)
        freqS[c - 'a']++;

    for (auto const c : target)
        freqTarget[c - 'a']++;

    for (auto const c : target)
        Max_Copies = min(Max_Copies, freqS[c - 'a'] / freqTarget[c - 'a']);
    cout << Max_Copies;
}