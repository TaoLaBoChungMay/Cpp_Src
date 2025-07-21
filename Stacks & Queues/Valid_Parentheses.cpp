#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // Tạo ra stack để chứa các ký tự '(','[','{'
    // Sau khi chứa xong thì các kí tự còn lại sẽ là các ký tự đóng
    unordered_map<char, char> mpp = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
    stack<char> stk;

    for (char c : s)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            stk.push(c);
        }
        else
        {
            // TH1 : stack rỗng => chỉ có các ký tự đóng ngoặc trong chuỗi => sai
            if (stk.empty())
            {
                cout << "F";
                return 0;
            }
            // TH2 : nếu kí tự đóng ngoặc khác với kí tự stk.top thì cũng sai
            // VD stk.top =='(' và c=='}' => sai
            // Tạo ra map để so sánh
            // Nên lấy kí tự đó ra khỏi stack để so sánh vào sau đó xóa
            char partner = stk.top();
            stk.pop();
            if (c != mpp[partner])
            {
                cout << "F";
                return 0;
            }
        }
    }
    // Sau khi kiểm tra xong thì check lại 1 lần nữa
    // Nếu xâu rỗng => đủ cặp đóng và mở ngoặc đúng cách
    // Nếu không rỗng => Sai vì vẫn còn dấu mở ngoặc trong stack

    if (stk.empty())
    {
        cout << "T";
        return 1;
    }
    cout << "F";
    return 0;
}