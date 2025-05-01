/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;
int main() {

	string s = "thanh pho phu my; brvt";
	map<char, int> mp;
	for (char c : s) {
		mp[c]++;
	}

	map<char, int>::iterator i;
	for ( i = mp.begin(); i!=mp.end(); i++) {
		if(i->first == ' ') {
			cout<<"space "<<i->second;
		}
		else {
			cout<<i->first<<" "<<i->second;
		}

		if(next(i) != mp.end()) cout<<", ";
		else cout<<".";
	}


	return 0;
}