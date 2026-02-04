#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> skill(n);
    vector<int> mana(m);

    for (int i = 0; i < n; i++)
        cin >> skill[i];
    for (int i = 0; i < m; i++)
        cin >> mana[i];

    vector<long long> Time_Wizards(skill.size());

    Time_Wizards[0] = skill[0] * mana[0];
    for (int i = 1; i < skill.size(); i++)
        Time_Wizards[i] = Time_Wizards[i - 1] + skill[i] * mana[0];

    for (int j = 1; j < mana.size(); j++)
    {
        long long Wait = 0; // Thời gian phải chờ để Wizard[0] có thể bắt đầu làm
        long long Total_Time = 0;
        for (int i = 0; i < skill.size(); i++)
        {
            if (Total_Time >= Time_Wizards[i]) // Làm ngay vì không có thời gian chờ
            {
                Total_Time += (long long)skill[i] * mana[j];
            }
            else // Pháp sư trước phải chờ pháp sư sau
            {
                Wait += Time_Wizards[i] - Total_Time;
                Total_Time = max(Total_Time, (long long)Time_Wizards[i]) + (long long)skill[i] * mana[j];
            }
        }

        Time_Wizards[0] = Wait + (long long)skill[0] * mana[j]; // SKill[0] là phù thủy đầu tiên
        for (int i = 1; i < skill.size(); i++)
            Time_Wizards[i] = Time_Wizards[i - 1] + (long long)skill[i] * mana[j];
    }
    cout << Time_Wizards[Time_Wizards.size() - 1];
    return 0;
}