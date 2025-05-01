#include <iostream>
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
        if(a[mid] < x) left=mid+1;
        else right=mid-1;
    }
    return -1;
}
int main() {
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(A)/sizeof(A[0]);
    int x = 5;
    cout<<linearSearchA(A, n, x);
    return 0;
}