#include <stack>
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // Tạo các kí tự đối xứng của các kí tự mở để so sánh
    // Vì trong mã ascii chúng không liền kề nhau
    unordered_map<char, char> mpp = {{'(', ')'}, {'{', '}'}, {'[', ']'}};
    stack<char> stk;
    // Tạo stack chỉ chứa các ký tự mở ngoặc
    for (auto const c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            stk.push(c);
        }
        else
        {
            if (stk.empty()) // => chỉ có kí tự đóng ngoặc => sai
                return 0;
            char partner = stk.top();
            stk.pop(); // Nên xóa sau khi lấy ra vì các kí tự sau nó có thể khác kí tự partner
            if (c != mpp[partner])
            {
                return 0;
            }
        }
    }
    // Kiểm tra lại lần nữa
    // Nếu rỗng => đã đủ cặp
    // Nếu không => trong stack chỉ các kí tự mở ngoặc => sai
    return stk.empty();
}