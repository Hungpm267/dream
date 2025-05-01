/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	vector<int> v = {5, 8, 6, 3, 4, 7, 2, 9};
	int target = 11;
	int start = 0; 
	int end = v.size() - 1;	
	
	
	cout<<"cac cap so co tong = 11 la: \n";
	sort(v.begin(), v.end());
	while(start < end) {
		int sum = v[start] +v[end];
		if(sum == target){
			cout<<v[start]<<" "<<v[end]<<endl;
			start++;
			end--;
		}
		else if(sum <target) start++;
		else end--;
	}
	return 0;
}
