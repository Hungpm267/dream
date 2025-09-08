/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &v){
    int min;
    for (int i = 0; i < v.size()-1; i++) {
        min = i;
        for (int j = i+1; j < v.size(); j++) {
            if(v[j] < v[min]){
                min = j;
                swap(v[min], v[i]);
            }
        }
    }
}
void insertionSort(vector<int> &v){
    for (int i = 1; i < v.size(); i++) {
        int e = v[i]; int j;
        for (j = i-1; j > -1; j--) {
            if(v[j] < e){
                break;
            }
            v[j+1] = v[j];
        }
        v[j+1] = e;
    }
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
void quick_Sort(vector<int> &v, int left, int right){
    int i = left, j = right;
    int pivot = v[(left + right) / 2];
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
void xuatmang(vector<int> v){
    for (const int &i : v) {
        cout<<i<<" ";
    }
}
int main()
{
    vector<int> v= {45,87,98,65,32,14};
    cout<<"selectionSort: ";
    selectionSort(v);
    xuatmang(v);
    
    vector<int> v1= {45,87,98,65,32,14};
    cout<<"\ninsertionSort: ";
    insertionSort(v1);
    xuatmang(v1);
    
    vector<int> v2= {45,87,98,65,32,14};
    cout<<"\nquickSort: ";
    quickSort(v2);
    xuatmang(v2);



    return 0;
}