#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> xuly(int n, int target, vector<int> candicates)
{
    vector<int> result;
    int i = 0;
    int j = i + 1;
    int sum = 0;
    if (sum == target)
    {
        return {result};
    }
    else if (sum > target)
    {
        return {};
    }

    for (int i = 0; i < candicates.size(); i++)
    {
        sum += candicates[i];
        xuly()
    }
}
int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> candicates;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        candicates.push_back(x);
    }
    vector<vector<int>> potential;

    sort(candicates.begin(), candicates.end());

    if (candicates[0] > target)
    {
        cout << "null";
        return 0;
    }
    for (auto i : potential)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}