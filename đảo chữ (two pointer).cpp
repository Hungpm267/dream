/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

string reverseString(string &str){
    int n = str.length();
    for (int i = 0; i < n/2; i++) {
        swap(str[i], str[n-i-1]);
    }
    return str;
}
int main(){
    string str = "manhhung";
    cout<<"sau khi dao la: "<<reverseString(str);
    
    return 0;
}