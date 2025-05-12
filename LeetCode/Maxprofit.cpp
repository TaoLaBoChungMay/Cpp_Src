#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;

    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    int maxprofit = 0;
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        else if (maxprofit < a[i] - min)
            maxprofit = a[i] - min;
    }

    cout << maxprofit;
    return 0;
}