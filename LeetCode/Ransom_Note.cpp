#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string ransomNote, magazine, result = "";
    cin >> ransomNote >> magazine;
    int j = 0, cnt = 0;
    for (int i = 0; i < magazine.size(); i++)
    {
        if (magazine[i] == ransomNote[j])
        {
            j++;
            cnt++;
        }
    }
    if (cnt == ransomNote.size())
    {
        cout << "YES";
        return 1;
    }
    return 0;
}