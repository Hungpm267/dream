/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <unordered_map>
using namespace std;

void findPair_hashmap(int arr[], int n, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int complement = target - arr[i];
        if (mp.find(complement) != mp.end()) {
            cout << "Cặp số: (" << arr[i] << ", " << complement << ")\n";
            return;
        }
        mp[arr[i]] = i; // Lưu giá trị vào hashmap
    }
    cout << "Không tìm thấy cặp số nào!\n";
}
void findPair_two_pointer(int arr[], int n, int target) {
    sort(arr, arr + n); // Bước sắp xếp O(N logN)
    int left = 0, right = n - 1;
    
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            cout << "Cặp số: (" << arr[left] << ", " << arr[right] << ")\n";
            return;
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    cout << "Không tìm thấy cặp số nào!\n";
}

int main() {
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    findPair(arr, n, target);
    return 0;
}
