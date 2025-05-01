#include <iostream>
using namespace std;

void selectionSort(int a[], int n) {
	int min;
	for (int i = 0; i < n-1; i++) {
		min = i;
		for(int j = i+1; j < n; j++) {
			if(a[min] > a[j]) {
			    min = j;
				swap(a[min], a[i]);
			}
		}
	}
}

void xuatmang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout<<a[i]<< " ";
	}
}

int main() {

	int a[] = {54,78,65,98,25,36,14,02,35,98};
	int n = sizeof(a)/sizeof(a[0]);
	selectionSort(a, n);
	xuatmang(a, n);
	return 0;
}