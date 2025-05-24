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
    sort(citations.begin(), citations.end());
    reverse(citations.begin(), citations.end());
    // <=> sort(citations.begin(), citations.end(),greater<int>());

    int count = 0;
    for (int i = 0; i < citations.size(); i++)
    {
        if (citations[i] >= i + 1)
            count++;
        else
            break;
    }
    cout << count;
    return 0;
}