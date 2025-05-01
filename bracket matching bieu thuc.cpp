#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Nhập biểu thức: ";
    getline(cin, s); // Đọc cả biểu thức bao gồm khoảng trắng

    stack<char> st; // Stack để lưu dấu ngoặc

    for (size_t i = 0; i < s.length(); i++) {
        char c = s[i];

        // Nếu là dấu ngoặc mở, đẩy vào stack
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } 
        // Nếu là ký tự hợp lệ (chữ cái và toán tử), bỏ qua
        else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
                 (c == '+' || c == '-' || c == '*' || c == '/' || c == ' ')) {
            continue;
        } 
        // Nếu là dấu ngoặc đóng, kiểm tra tính hợp lệ
        else if (c == ')' || c == '}' || c == ']') {
            // Nếu stack rỗng => Thiếu dấu mở
            if (st.empty()) {
                cout << "Lỗi tại vị trí " << i << ": Thiếu dấu ngoặc mở!" << endl;
                return 0;
            }

            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == ']' && top == '[') ||
                (c == '}' && top == '{')) {
                st.pop(); // Nếu khớp, loại bỏ dấu mở
            } else {
                cout << "Lỗi tại vị trí " << i << ": Dấu ngoặc không khớp!" << endl;
                return 0;
            }
        } 
        // Nếu gặp ký tự không hợp lệ
        else {
            cout << "Lỗi tại vị trí " << i << ": Ký tự không hợp lệ ('" << c << "')!" << endl;
            return 0;
        }
    }

    // Nếu stack còn phần tử => Thiếu dấu đóng
    if (st.empty()) {
        cout << "Biểu thức hợp lệ!" << endl;
    } else {
        cout << "Lỗi: Thiếu dấu ngoặc đóng!" << endl;
    }

    return 0;
}
