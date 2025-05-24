#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }

    unordered_map<int, int> dup;
    for (int i = 0; i < nums.size(); i++)
    {
        dup[nums[i]]++;
        if (dup[nums[i]] > 1)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}