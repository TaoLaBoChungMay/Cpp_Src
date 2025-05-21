#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    map<int, int> mp;
    int n;
    cin >> n;
    vector<int> a(n);
    // dem so lan xuat hien cua cac phan tu trong mang sau do in ra tan suat
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (mp[a[i]] != 0)
        {
            cout << a[i] << " " << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
    }
}