#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>
using namespace std;



void quick_sort_ascending(vector<int> &a, int left, int right){
    int pivot=a[(left+right)/2];
    int i=left, j=right;
    while(i<j){
        while(a[i]< pivot) i++;
        while(a[j]> pivot) j--;
        if(i<=j) {
            swap(a[i], a[j]);
            i++;j--;
        }
    }
    if(left<j) quick_sort_ascending(a, left, j);
    if(i<right) quick_sort_ascending(a, i, right);
}


void Sort(vector<int> &A)
{
	quick_sort_ascending(A,0,A.size()-1);
}

void xuat(vector<int> a){
    for (int i = 0; i < a.size(); i++) {
        cout<<a[i]<<" ";
    }
}


int main() {
	vector<int> A = {78,54,65,98,32,14,21,20,85,96,36};

	Sort(A);
	xuat(A);
	return 0;
}