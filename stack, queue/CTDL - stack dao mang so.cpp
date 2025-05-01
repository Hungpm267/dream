#include <iostream>
#include <stack>
#include <vector>

using namespace std;


int main(){
    stack<int> st;
    vector<int> v = {12,23,34,45,56,67,78,89,90};
    
    for (int i = 0; i < v.size(); i++) {
        st.push(v[i]);
    }
    
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}