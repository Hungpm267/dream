#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {

	stack<int> st;
	int x;
	cin>>x;

	int y =x;

	while(y!=0) {
		st.push(y%2);
		y/=2;
	}

	while(!st.empty()) {
		cout<<st.top();
		st.pop();
	}

	return 0;
}
