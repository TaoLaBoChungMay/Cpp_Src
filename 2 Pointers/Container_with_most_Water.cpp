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
    int max_Area = 0;
    while (left < right)
    {
        int length_rectangle = right - left;
        int width_rectangle = min(height[left], height[right]);
        max_Area = max(max_Area, length_rectangle * width_rectangle);
        if (height[left] > height[right])
            right--;
        else
            left++;
    }
    cout << max_Area;
}