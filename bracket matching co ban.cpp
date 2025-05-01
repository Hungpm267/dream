#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Nhập chuỗi chứa các dấu ngoặc: ";
    cin >> s;  // Nhập chuỗi ký tự
    stack<char> st;

    for (char c : s) {
        if (c == '{' || c == '[' || c == '(') {
            st.push(c);  // Đẩy dấu ngoặc mở vào stack
        } else {
            if (st.empty()) {
                cout << "Chuỗi không hợp lệ!";
                return 0;
            }

            // Kiểm tra dấu ngoặc đóng có khớp với dấu ngoặc mở trên đỉnh stack không
            if ((st.top() == '{' && c == '}') ||
                (st.top() == '[' && c == ']') ||
                (st.top() == '(' && c == ')')) {
                st.pop();  // Lấy dấu ngoặc mở ra khỏi stack
            } else {
                cout << "Chuỗi không hợp lệ!";
                return 0;
            }
        }
    }

    // Kiểm tra xem stack có rỗng không
    if (st.empty()) {
        cout << "Chuỗi hợp lệ!";
    } else {
        cout << "Chuỗi không hợp lệ!";
    }

    return 0;
}