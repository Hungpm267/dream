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
#include <sstream>
using namespace std;
int main() {

	string s = "thanh pho phu my brvt thanh pho thanh";
	map<string, int> mp;
	
	stringstream ss(s);
	string word;
	while(ss >> word) {
		mp[word]++;
	}

	map<string, int>::iterator i;
	for (i = mp.begin(); i != mp.end(); ++i) {
		cout<<i->first<<" "<<i->second<<endl;
	}

	return 0;
}