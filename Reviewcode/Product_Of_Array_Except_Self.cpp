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

    int left = 1;
    vector<int> answer;
    for (int i = 0; i < nums.size(); i++)
    {
        answer.push_back(left);
        left *= nums[i];
    }
    int right = 1;
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        answer[i] *= right;
        right *= nums[i];
    }
    return answer;
}