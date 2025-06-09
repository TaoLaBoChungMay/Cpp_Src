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
    int Total_Profit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < prices[i + 1])
            Total_Profit += prices[i + 1] - prices[i];
    }
    cout << Total_Profit;
    return 0;
}