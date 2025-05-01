/******************************************************************************

dao nguoc chu dung de quy

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str, int left, int right) {
	if(left > right) {
		return;
	}
	char temp = str[left];
	str[left]=str[right];
	str[right] = temp;
	reverseString(str, left + 1, right - 1);
}
void reverseString_dequy(string &str) {
	reverseString(str, 0, str.length()-1 );
}
int main() {
	string str = "hello world";

	reverseString_dequy(str);
	cout<<str;
	return 0;
}