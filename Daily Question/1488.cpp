#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <set>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> rains(n);

    for (int i = 0; i < n; i++)
        cin >> rains[i];

    vector<int> ans(n, 1);
    int i = 0;
    unordered_map<int, int> mpp;
    set<int> day_dry;
    while (i < rains.size())
    {
        if (rains[i] == 0)
        {
            day_dry.insert(i); // Trữ ngày khô
        }
        else
        {
            if (mpp.find(rains[i]) != mpp.end())
            {
                auto it = day_dry.lower_bound(mpp[rains[i]]); // Lower_bound trả về giá trị GẦN NHẤT của mpp[rains[i]]
                if (it == day_dry.end())
                {
                    cout << "0";
                    return 0;
                }
                mpp[rains[i]] = i; // Cập nhật lại ngày mưa
                ans[*it] = rains[i];
                day_dry.erase(it); // Xóa chỉ số i lúc hồ khô
            }
            ans[i] = -1;
            mpp[rains[i]] = i;
        }

        i++;
    }

    for (auto const day : ans)
    {
        cout << day << " ";
    }
    return 0;
}
