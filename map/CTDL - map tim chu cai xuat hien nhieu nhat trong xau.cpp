// tim phan tu xuat hien nhieu nhat trong mang

#include<iostream>
#include<string>
#include <map>
#include <sstream>
using namespace std;

int main() {
	map<string, int> mp;
	string s;
	getline(cin, s);
	stringstream ss(s);
	string word;
	while(ss >> word){
	    mp[word]++;
	}
	

	cout << "\nKet qua la: \n";

	int max_freq = 0;
	string res;
	for (map<string, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
		cout << it->first << " xuat hien " << it->second << " lan.\n";
		if (it->second > max_freq) {
			max_freq = it->second;
			res = it->first;
		}
	}

	cout << "Phan tu xuat hien nhieu nhat la: " << res << " voi tan suat la: " << max_freq << endl;

	return 0;
}
