#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> height;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        height.push_back(x);
    }
    int trap = 0;
    int left = 0, right = height.size() - 1;
    int Max_Left = height[left], Max_Right = height[right];
    while (left < right)
    {
        if (Max_Left <= Max_Right)
        {
            trap += max(0, Max_Left - height[left]);
            left++;
            Max_Left = max(Max_Left, height[left]);
        }
        else
        {
            trap += max(0, Max_Right - height[right]);
            right--;
            Max_Right = max(Max_Right, height[right]);
        }
    }

    cout << trap;
    return 0;
}