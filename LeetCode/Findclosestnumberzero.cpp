#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sieve(vector<int> &a, int &n)
{
    int closest = a[0];

    for (int i = 0; i < a.size(); i++)
        if (abs(a[i]) < abs(closest) || abs(a[i]) == abs(closest) && a[i] > closest)
            closest = a[i];
    cout << closest;
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        int x = 0;
        cin >> x;
        a.push_back(x);
    }
    sieve(a, n);
}
