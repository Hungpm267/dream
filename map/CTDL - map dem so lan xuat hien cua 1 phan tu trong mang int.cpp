/******************************************************************************

dem so lan xuat hien cua phan tu trong mang integer
*******************************************************************************/
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main(){
    unordered_map<int, int> mp;
    int a[]={78,98,65,32,87,45,87,65,32,78,78,98};
    int na = sizeof(a)/sizeof(a[0]);
    for (int i = 0; i < na; i++) {
        mp[a[i]]++;
    }
    cout<<endl;
    for (const auto &m : mp) {
        cout<<m.first<<" xuat hien "<<m.second<<" lan.\n";
    }
    
    return 0;
}