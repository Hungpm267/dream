#include <iostream>
#include <stack>
#include <sstream>
#include <string>
using namespace std;

int main(){
    
    stack<string> st;
    string s = "hung dep trai";
    stringstream ss(s);
    string word;
    while(ss >> word){
        st.push(word);
    }
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}