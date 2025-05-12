#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, b;
    cin >> n >> b;

    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    // Condition : vector must acsending sort
    int d = 3;
    int j = 3, i = 0;
    while (a[j] < b && j < n)
    {
        j += d;
        i += d;
    }
    if (j >= n)
        j = n - 1;

    for (int k = i; k <= j; k++)
    {
        if (a[k] == b)
        {
            cout << k;
            return 0;
        }
    }
    cout << "-1";
    return 0;
}