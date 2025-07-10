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
    int area = 0;
    while (left < right)
    {
        int length = right - left;
        int width = min(height[left], height[right]);
        area = max(area, length * width);
        if (height[left] <= height[right])
            left++;
        else
            right--;
    }
    cout << area;
}