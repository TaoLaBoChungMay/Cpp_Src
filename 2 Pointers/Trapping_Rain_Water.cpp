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
    int trap = 0;
    int left = 0, right = height.size() - 1;
    int M_L = height[left], M_R = height[right];
    while (left < right)
    {
        if (M_L <= M_R)
        {
            trap += max(0, M_L - height[left]);
            left++;
            M_L = max(M_L, height[left]);
        }
        else
        {
            trap += max(0, M_R - height[right]);
            right--;
            M_R = max(M_R, height[right]);
        }
    }
    cout << trap;
}