#include <iostream>
#include <set>

using namespace std;
// O(logn)
// insert
// find
// count
// erase
int main()
{
    set<string> st;
    for (int i = 0; i < 5; i++)
    {
        string x;
        getline(cin, x);
        st.insert(x);
    }

    for (auto const c : st)
    {
        cout << c;
    }
}