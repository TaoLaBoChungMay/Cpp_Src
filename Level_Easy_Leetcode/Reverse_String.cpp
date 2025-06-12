#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<char> s;
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        s.push_back(x);
    }

    reverse(s.begin(), s.end());
    for (auto const n : s)
    {
        cout << n << " ";
    }
}