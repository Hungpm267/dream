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
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    string str = "SD0123,BPO4567;SD1234,BPO1111;SD222,BPO5678;BPO4568;SD3465";
	replace(str.begin(), str.end(), ';', ',');
	char delimiter = ',';
	
	vector<string> idlist;

	stringstream ss(str);
	string word;
	
	while(getline(ss, word, delimiter)) {
	    idlist.push_back(word);
	}

    cout<<"ket qua sau khi tach la: \n";
    for (auto i : idlist) {
        cout<<i<<" ";
    }
    
    unordered_set<string> us_bpo, us_sd;
    for (auto i : idlist) {
        if(i.size() == 7 && i.substr(0,3) == "BPO") us_bpo.insert(i);
        else if(i.size() == 6 && i.substr(0,2) == "SD") us_sd.insert(i);
    }
    
    cout<<"\nso luong nguoi la bpo: "<<us_bpo.size();
    cout<<"\nso luong nguoi la sd: "<<us_sd.size();
    
    

	return 0;
}