#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> list1, list2;
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        list1.push_back(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        list2.push_back(x);
    }

    vector<int> sorted;
    int i = 0, j = 0;
    while (i < list1.size() && j < list2.size())
    {
        if (list1[i] <= list2[j])
        {
            sorted.push_back(list1[i++]);
        }
        else
        {
            sorted.push_back(list2[j++]);
        }
    }

    while (i < list1.size())
    {
        sorted.push_back(list1[i++]);
    }

    while (j < list2.size())
    {
        sorted.push_back(list2[j++]);
    }
    for (int i = 0; i < sorted.size(); i++)
    {
        cout << sorted[i] << " ";
    }
}