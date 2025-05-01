#include <iostream>
#include <cctype>
#include <queue>
#include <string>
#include <stack>
using namespace std;

int main() {
	string s;
	getline(cin, s);

	queue<char> q;
	stack<char> st;

	for (char c : s) {
		if(isalnum(c)) {
			c = tolower(c);
			q.push(c);
			st.push(c);
		}
	}

	while(!q.empty()) {
		if(q.front() != st.top()) {
			cout<<"khong phai palindromes.";
			return 0;
		}
		q.pop();
		st.pop();
	}

	if(q.empty()) {
		cout<<"la palindromes.";
	}

	return 0;
}

// isalnum(x) check xem x cC3 ta;+ a-z hoa:7c 0-9 khoonh?