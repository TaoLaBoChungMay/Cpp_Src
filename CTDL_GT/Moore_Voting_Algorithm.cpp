#include <iostream>

using namespace std;

int main()
{
    int ans = 0;
    int cnt = 0;
    for (auto const n : nums)
    {
        if (cnt == 0)
        {
            ans = n;
            cnt = 1;
        }
        if (ans == n)
            cnt++;
        else
            cnt--;
    }
}