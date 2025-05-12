#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int j = 0;
    for (int i = 2; i < n; i++)
    {
        j = i;
        while (j > 0 && a[j] <= a[j - 1])
        {
            swap(a[j], a[j - 1]);
            j--;
        }
    }

    for (auto const k : a)
    {
        cout << k << " ";
    }
}