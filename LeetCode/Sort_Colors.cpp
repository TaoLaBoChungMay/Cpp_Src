#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> colors;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        colors.push_back(x);
    }
    for (int i = 0; i < colors.size() - 1; i++)
    {
        int vt = i;
        for (int j = i + 1; j < colors.size(); j++)
        {
            if (colors[j] < colors[vt])
            {
                vt = j;
            }
        }
        swap(colors[i], colors[vt]);
    }

    for (auto const k : colors)
    {
        cout << k << " ";
    }
}