#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    vector<int> citations;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        citations.push_back(x);
    }

    for (int i = 1; i < citations.size(); i++)
    {
        int j = i;
        while (j > 0 && citations[j] < citations[j - 1])
        {
            swap(citations[j], citations[j - 1]);
            j--;
        }
    }
    // better if use algorithm
    reverse(citations.begin(), citations.end());
    int cnt = 0;
    for (int i = 0; i < citations.size(); i++)
    {
        int k = i + 1;
        if (citations[i] >= k)
        {
            cnt++;
        }
    }
    cout << cnt;
}