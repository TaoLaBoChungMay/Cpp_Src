#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> height;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        height.push_back(x);
    }

    int left = 0;
    int right = height.size() - 1;
    int max_area = 0;
    while (left < right)
    {
        int dai = right - left;
        int rong = min(height[left], height[right]);
        max_area = max(max_area, dai * rong);
        if (height[left] >= height[right])
        {
            right--;
        }
        else
        {
            left++;
        }
    }

    cout << max_area;
}