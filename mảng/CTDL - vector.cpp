/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void NhapDS(vector<int> &a) {
	int x;
	cin>>x;
	while(x != 0) {
		a.push_back(x);
		cin>>x;
	}
}
void InDS(vector<int> a) {
	for (const auto &i : a) {
		cout<<i<<" ";
	}
}
int TimK(vector<int> a, int k) {
	vector<int>::iterator i;
	i = find(a.begin(), a.end(), k);
	if(i != a.end()) {
		return i-a.begin();
	}
	return -1;
}
void Top5(vector<int> a){
    if(a.size() < 5){
        cout<<"mang ko du 5 phan tu!";
        return;
    }
    sort(a.begin(), a.end());
    for (vector<int>::iterator it = (a.end()- 1); it > (a.end() - 6); it--) {
        cout<<*it<<" ";
    }
}


int main() {
	vector<int> A;

	cout<<"nhap ds: ";
	NhapDS(A);
	cout << "Danh sach da nhap: ";
	InDS(A);

	cout << "\nGia tri can tim k = ";
	int k; cin >> k;
	cout <<"o vi tri index = "<< TimK(A, k) << endl;
	cout<<"top 5 cao so cao nhat la: ";
	Top5(A);
	return 0;
}