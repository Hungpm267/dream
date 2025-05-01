/******************************************************************************

dao nguoc chu dung de quy

*******************************************************************************/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool isPrime(int x) {
	if(x<2) return false;
	for (int i = 2; i <= sqrt(x); i++) {
		if(x%i ==0) return false;
	}
	return true;
}
bool isPrime_c2(int x){
    if(x<2) return false;
    for (int i = 0; i < x; i++) {
        if(x%i==0) return false;
    }
    return true;
}
int main() {
    
    int x = 11;
    bool b = isPrime(x);
    cout<<x<<" la so nguyen to?: "<<b;
    

	return 0;

}