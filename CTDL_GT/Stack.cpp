#include <iostream>
#include <vector>
#include <stack>

using namespace std;
// LIFO : Last in first out
// push : đẩy vào
// pop : bứt ra (xóa phần tử ở đỉnh)
// top
// size
// .empty => Trả về false nếu xâu không rỗng và ngược lại
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    // Phải gọi top trước rồi mới đến pop nếu muốn xóa phần tử trên cùng
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    return 0;
}