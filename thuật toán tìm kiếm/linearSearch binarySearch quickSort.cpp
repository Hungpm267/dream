/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

int linearSearchA(int A[], int n, int x) {
    int i = 0;
    A[n] = x; // A có hơn n phần tử
    while (A[i] != x)
        i++;
    if (i < n) 
        return i;
    else 
        return -1;
}
int binarySearch(int a[], int n, int x){
    int left = 0, right = n-1;
    int mid;
    while(left <= right){
        mid = (left+right)/2;
        if(a[mid] == x) return mid;
        if(a[mid] < x) right=mid-1;
        else left=mid+1;
    }
    return -1;
}
void quick_Sort(vector<int> &v, int left, int right){
    int i = left, j = right;
    int pivot = v[(left + right) /2];
    while(i <= j){
        while(v[i] < pivot) i++;
        while(v[j] > pivot) j--;
        if(i <= j){
            swap(v[i], v[j]);
            i++; j--;
        }
    }
    if(left < j) quick_Sort(v, left, j);
    if(i < right) quick_Sort(v, i, right);
}
int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(A)/sizeof(A[0]);
    int x = 5;
    cout<<linearSearchA(A, n, x);
    return 0;
}