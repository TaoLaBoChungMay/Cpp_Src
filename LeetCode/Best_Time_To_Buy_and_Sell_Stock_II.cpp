#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> prices;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        prices.push_back(x);
    }

    int Max_Profit = 0;
    for (int i = 0; i < prices.size() - 1; i++)
    {
        if (prices[i] < prices[i + 1])
            Max_Profit += prices[i + 1] - prices[i];
    }

    cout << Max_Profit;
}