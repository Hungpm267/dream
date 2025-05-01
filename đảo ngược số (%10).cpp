/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include<stack>
#include<vector>
#include <string>
using namespace std;


int main(){
    
    int x;
    cout<<"nhập số x: "; cin>>x;
    vector<int> v;
    
    while(x!= 0){
        v.push_back(x%10);
        x/=10;
    }
    
    cout<<"so he nhi phan la: ";
    for (int i : v) {
        cout<<i;
    }
    
    return 0;
}