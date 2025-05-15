#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Define : Sort descending and find the numbers satifice "paramaters >= index" itself and count
// EX : 1 3 1 -> Sort : 3 1 1, Index : 1 2 3
// Have 1 numbers satifice numbers >=Index ( 3 >=1)
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
    int cnt = 0;
    sort(citations.begin(), citations.end());
    reverse(citations.begin(), citations.end());
    int j = 1;
    for (int i = 0; i < citations.size(); i++)
    {
        if (citations[i] >= j)
        {
            cnt++;
        }
        j++;
    }

    cout << cnt;
}