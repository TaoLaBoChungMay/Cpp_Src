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
    int left = 0, right = height.size() - 1;
    int Max_Left = height[left], Max_Right = height[right];
    int trap = 0;
    while (left < right)
    {
        // Thuật toán Max_Left < Max_Right
        if (Max_Left <= Max_Right)
        {
            trap += max(0, Max_Left - height[left]);
            left++;
            Max_Left = max(height[left], Max_Left);
        }
        else
        {
            trap += max(0, Max_Right - height[right]);
            right--;
            Max_Right = max(height[right], Max_Right);
        }
    }
    cout << trap;
}