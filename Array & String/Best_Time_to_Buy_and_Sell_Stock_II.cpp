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
    int low = prices[0], high = prices[0];
    int i = 0;
    while (i < prices.size())
    {
        while (i < prices.size() - 1 && prices[i] > prices[i + 1])
            i++;
        low = prices[i];
        while (i < prices.size() - 1 && prices[i] < prices[i + 1])
            i++;
        high = prices[i];
        Max_Profit += high - low;
        i++;
    }

    cout << Max_Profit;
}