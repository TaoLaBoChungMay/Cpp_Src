#include <iostream>
#include <vector>

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

    // candicates algorithm
    int dem = 0, ans = 0;
    for (auto const n : nums)
    {
        if (dem == 0)
        {
            ans = n;
            dem = 1;
        }
        if (ans == n)
            dem++;
        else
            dem--;
    }
    return ans;
}