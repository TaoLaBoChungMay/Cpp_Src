#include <iostream>
#include <set>
// Cho mang co n phan tu va so nguyen k, doi voi moi day con lien tiep co chieu dai k, in ra cac phan tu lon nhat hoac nho nhat
// 10 3
// 1 2 3 1 4 5 1 8 9 10
// output
// 3 3 4 5 5 8 9 10
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    multiset<int> ms;
    for (int i = 0; i < k; i++)
    {
        ms.insert(a[i]);
    }
    for (int i = k; i < n; i++)
    {
        cout << *ms.rbegin() << " ";
        ms.erase(ms.find(a[i - k]));
        ms.insert(a[i]);
    }
}