/******************************************************************************

in ra n so fibonacci dau tien

*******************************************************************************/
#include <iostream>
using namespace std;

int fibonacci_de_quy(int x){
    if(x <= 1) return x;
    return fibonacci_de_quy(x-1) + fibonacci_de_quy(x-2);
}
int fibonacci_loop(int x){
    if(x<=1) return x;
    int previous = 0, current =1, next;
    for (int i = 2; i <= x; i++) {
        next = previous +current;
        previous = current;
        current = next;
    }
    return current;
}
int main(){
    int n;
    cout<<"nhap so luong so fibonacci in ra: ";
    cin>>n;
    
    cout<<"fibonacci_de_quy: ";
    for (int i = 1; i <= n; i++) {
        cout<<fibonacci_de_quy(i)<<" ";
    }
    
    cout<<"\nfibonacci_loop: ";
    for (int i = 1; i <= n; i++) {
        cout<<fibonacci_loop(i)<<" ";
    }
    
    return 0;
}