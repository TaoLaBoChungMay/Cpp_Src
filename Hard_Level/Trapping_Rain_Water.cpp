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
    vector<int> left, right;
    // Tạo vector trái và phải
    int W_L = 0, W_R = 0;
    for (int i = 0; i < height.size(); i++)
    {
        // Gán W_L trước và tìm max(W_L) hiện tại ở vị trí thứ i
        //  Tương tự với right
        //  Mục đích để tìn ra min của left và right tại vị trí thứ i
        left.push_back(W_L);
        W_L = max(W_L, height[i]);
        right.push_back(W_R);
        W_R = max(W_R, height[height.size() - 1 - i]);
    }
    int trap = 0;
    reverse(right.begin(), right.end());
    for (int i = 0; i < height.size(); i++)
    {
        int pol = min(left[i], right[i]) - height[i];
        // So sánh pol xem nó có âm không
        trap += max(0, pol);
    }
    cout << trap;
    return 0;
}