#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main()
{
    string s;
    int t, MOD = 1e9 + 7;
    cin >> s >> t;
    vector<int> dp(26, 1);
    for (int i = 0; i < t; i++)
    {
        vector<int> next(26, 0);
        for (int j = 0; j < 25; j++)
            next[j] = dp[j + 1] % MOD;
        next[25] = (dp[0] + dp[1]) % MOD;
        dp = next;
    }

    long long total = 0;
    for (auto const c : s)
    {
        total = (total + dp[c - 'a']);
    }

    cout << total;
}