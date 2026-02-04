#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> energy(n);

    for (int i = 0; i < n; i++)
    {
        cin >> energy[i];
    }
    int maxEnergy = INT_MIN;
    for (int i = energy.size() - k; i < energy.size(); i++)
    {
        int j = i;
        int total = 0;
        while (j >= 0)
        {
            total += energy[j];
            maxEnergy = max(maxEnergy, total);
            j -= k;
        }
    }

    cout << maxEnergy;
}