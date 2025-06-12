#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> numbers;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        numbers.push_back(x);
    }
    int left = 0, right = numbers.size() - 1;
    while (left <= right)
    {
        if (numbers[left] + numbers[right] < target)
            left++;
        else if (numbers[left] + numbers[right] > target)
            right--;
        else
            return {left + 1, right + 1};
    }
    return {1, 2};
}