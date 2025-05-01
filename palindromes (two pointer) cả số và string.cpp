/******************************************************************************

palindrome ko su dung thu vien, dung two pointer

*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int x = 1423454321;
    
    string str = to_string(x);
    int start =0, end = str.length()-1;
    while(start <= end){
        if(str[start] != str[end]){
            cout<<"not is palindromes.";
            return 0;
        }
        start++; end--;
    }
    cout<<"is palindromes.";
    
    return 0;
}