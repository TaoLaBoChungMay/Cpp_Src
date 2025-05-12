#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> nums1;
    vector<int> nums2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums1.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        nums2.push_back(x);
    }

    for (int i = 0; i < nums2.size(); i++)
    {
        nums1[i + m] = nums2[i];
    }

    sort(nums1.begin(), nums1.end());
    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
}