#include <iostream>
using namespace std;
void xoay90do(int a[][100], int n, int m){
    //transpose
    for (int i = 0; i < n; i++) {
        for (int j = i; j < m; j++) {
            swap(a[i][j], a[j][i]);
        }
    }
    //reverse
    for (int i = 0; i < n; i++) {
        int start = 0, end = m-1;
        while(start < end){
            swap(a[i][start], a[i][end]);
            start++; end--;
        }
    }
}
int main(){
    
    cout<<"nhap lan luot so dong va so cot: ";
    int n,m; cin>>n>>m;
    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>> a[i][j];
        }
    }
    
    cout<<"xuat mang: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    cout<<"xoay ma tran: \n";
    xoay90do(a, n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}