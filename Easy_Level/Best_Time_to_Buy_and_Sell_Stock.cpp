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
    int buy = INT_MAX, sell = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (buy > prices[i])
        {
            buy = prices[i];
        }
        else
        {
            sell = prices[i];
            Max_Profit = max(sell - buy, Max_Profit);
        }
    }
    cout << Max_Profit;
}
