#include <iostream>

using namespace std;

int main()
{
    string jewels, stones;
    cin >> jewels >> stones;
    int j = 0, count = 0;
    while (j < jewels.size())
    {
        for (int i = 0; i < stones.size(); i++)
            if (jewels[j] == stones[i])
                count++;
        j++;
    }
    cout << count;
    return 0;
}