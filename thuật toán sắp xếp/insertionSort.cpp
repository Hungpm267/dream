#include <iostream>
using namespace std;

void insertionSort(int a[], int n) {
	
	for (int i = 1; i < n; i++) {
	    int e = a[i];
	    int k;
	    for (k = i-1; k>-1; k--) {
	        if (a[k] < e) break;
	        a[k+1] = a[k];
	    }
	    a[k+1]=e;
	}
}

void xuatmang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout<<a[i]<< " ";
	}
}

int main() {

	int a[] = {54,78,65,98,25,36,14, 2,35,98};
	int n = sizeof(a)/sizeof(a[0]);
	insertionSort(a, n);
	xuatmang(a, n);
	return 0;
}