#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    string jewels, stones;
    cin >> jewels >> stones;

    unordered_set<char> st;
    for (int i = 0; i < jewels.size(); i++)
        st.insert(jewels[i]);
    int count = 0;
    for (int i = 0; i < stones.size(); i++)
    {
        if (st.find(stones[i]) != st.end())
        {
            count++;
        }
    }
    cout << count;
    return 0;
}