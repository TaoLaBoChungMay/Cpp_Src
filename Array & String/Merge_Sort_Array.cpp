#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    vector<int> nums1, nums2;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        nums1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums2.push_back(x);
    }
    int a = m - 1, b = n - 1;
    int c = m + n - 1;
    nums1.resize(m + n);
    while (a >= 0 && b >= 0)
    {
        if (nums1[a] < nums2[b])
            nums1[c--] = nums2[b--];
        else
            nums1[c--] = nums1[a--];
    }
    while (b >= 0)
    {
        nums1[c--] = nums2[b--];
    }

    for (auto const n : nums1)
    {
        cout << n << " ";
    }
}