#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> citations;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        citations.push_back(x);
    }

    sort(citations.begin(), citations.end(), greater());
    int i = 0;
    for (i = 0; i < citations.size(); i++)
    {
        if (citations[i] < i + 1)
        {
            cout << i;
            return 0;
        }
    }
    cout << i;
    for (auto const n : citations)
    {
        cout << n << " ";
    }
}