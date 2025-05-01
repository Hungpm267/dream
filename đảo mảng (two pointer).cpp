/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector> 
using namespace std;

int main(){
    
    vector<int> a;
    cout<<"moi ban nhap mang: ";
    int x; cin>>x;
    while(x!=0){
        a.push_back(x);
        cin>>x;
    }
    
    int start = 0;
    int end = (a.size() - 1);
    while(start <= end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++; end--;
    }
    cout<<"sau khi dao: ";
    for (int i = 0; i < a.size(); i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}