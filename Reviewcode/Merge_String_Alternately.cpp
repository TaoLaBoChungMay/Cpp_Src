#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string word1, word2, result = "";

    cin >> word1;
    cin >> word2;
    int i = 0, j = 0;
    while (i < word1.length() || j < word2.length())
    {
        if (i < word1.length())
        {
            result += word1[i];
            i++;
        }
        if (j < word2.length())
        {
            result += word2[j];
            j++;
        }
    }
    cout << result;
}