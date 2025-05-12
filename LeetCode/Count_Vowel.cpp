#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, left, right;

    cin >> n >> left >> right;
    vector<string> words;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        words.push_back(s);
    }
    int cnt = 0;

    for (int i = left; i <= right; i++)
    {
        if ((words[i][0] == 'a' || words[i][0] == 'e' || words[i][0] == 'i' || words[i][0] == 'o' || words[i][0] == 'u') && (words[i][words[i].length() - 1] == 'a' || words[i][words[i].length() - 1] == 'e' || words[i][words[i].length() - 1] == 'i' || words[i][words[i].length() - 1] == 'o' || words[i][words[i].length() - 1]) == 'u')
        {
            cnt++;
        }
    }

    cout << cnt;
    return 0;
}