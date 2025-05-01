/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include<sstream>
#include <cctype>
#include <algorithm>
using namespace std;

int main()
{
	string str = "pham,manh,hung;dep;trai";
	replace(str.begin(), str.end(), ';', ',');
	char delimiter = ',';

	stringstream ss(str);
	string word;
	cout<<"ket qua sau khi tach la: \n";
	while(getline(ss, word, delimiter)) {
	    cout<<word<<"\n";
	}


	return 0;
}