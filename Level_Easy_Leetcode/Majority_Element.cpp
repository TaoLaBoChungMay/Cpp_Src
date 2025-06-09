#include <iostream>
#include <vector>
#include <map>
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
    int ans = 0;
    int cnt = 0;
    for (auto const n : nums)
    {
        if (cnt == 0)
        {
            ans = n;
            cnt = 1;
        }
        else if (ans == n)
            cnt++;
        else
            cnt--;
    }
    cout << ans;
}