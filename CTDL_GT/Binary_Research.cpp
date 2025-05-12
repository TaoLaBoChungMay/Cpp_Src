#include <iostream>
#include <vector>
using namespace std;
int binSearch(vector<int> a, int k)
{
    int res = -1;
    int left = 0, right = a.size() - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (a[mid] == k)
            return mid;
        else if (a[mid] > k)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return res;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    cout << binSearch(a, k);
}