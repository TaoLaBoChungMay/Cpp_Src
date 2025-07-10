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
    int buy = prices[0];
    int Max_Profit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        buy = min(buy, prices[i]);
        Max_Profit = max(Max_Profit, prices[i] - buy);
    }

    cout << Max_Profit;
}