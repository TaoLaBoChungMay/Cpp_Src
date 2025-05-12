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
    int Min = INT_MAX;
    int Max_Profit = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        if (Min > prices[i])
            Min = prices[i];
        else
        {
            if (prices[i] - Min > Max_Profit)
            {
                Max_Profit = prices[i] - Min;
                cout << Max_Profit << " ";
            }
        }
    }
    cout << Max_Profit;
}