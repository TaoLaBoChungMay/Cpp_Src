#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    long long success;
    cin >> success;
    cin >> n >> m;
    vector<int> spells(n);
    vector<int> potions(m);
    for (int i = 0; i < n; i++)
        cin >> spells[i];
    for (int i = 0; i < m; i++)
        cin >> potions[i];

    vector<int> Upgraded;
    sort(potions.begin(), potions.end());

    for (int i = 0; i < spells.size(); i++)
    {
        if (potions[potions.size() - 1] * spells[i] < success)
        {
            Upgraded.push_back(0);
            continue;
        }
        int left = 0, right = potions.size() - 1;
        while (left < right)
        {
            int mid = (left + right) / 2;
            if (potions[mid] * spells[i] < success)
                left = mid + 1;
            else
                right = mid;
        }
        Upgraded.push_back(potions.size() - left);
    }
    for (auto ans : Upgraded)
    {
        cout << ans << " ";
    }
    return 0;
}