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

    vector<long long> dp(26, 0);
    for (int i = 0; i < 26; i++)
        dp[i]++;
    long long total = 0;
    int trans = 0;
    for (int i = 0; i < t; i++)
    {
        vector<long long> next(26, 0);
        for (int j = 0; j < 25; j++)
            next[j] = dp[j + 1];
        next[25] = (dp[0] + dp[1]) % MOD;
        dp = next;
    }
    for (char c : s)
        total = (total + dp[c - 'a']) % MOD;

    cout << total;
}