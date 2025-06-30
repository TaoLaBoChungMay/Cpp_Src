#include <iostream>
#include <vector>

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
    int container = 0;
    while (left < right)
    {
        int dai = right - left;
        int rong = min(height[left], height[right]);
        container = max(dai * rong, container);
        if (height[left] <= height[right])
            left++;
        else
            right--;
    }
    cout << container;
}