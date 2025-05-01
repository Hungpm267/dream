#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {5, 8, 6, 3, 4, 7, 2, 9};
    int target = 11;

    unordered_map<int, int> mp;
    vector<int> a;

    for (int i = 0; i < v.size(); i++) {
        int x = target - v[i];

        // Nếu x đã có trong map, nghĩa là có một cặp (x, v[i]) thỏa mãn
        if (mp.find(x) != mp.end()) {
            a.push_back(v[i]);
            a.push_back(x);
        }

        // Lưu giá trị vào map
        mp[v[i]] = i;
    }

    // In kết quả theo từng cặp
    for (int i = 0; i < a.size(); i += 2) {
        cout << "Hai so co tong bang " << target << " la: " 
             << a[i] << " va " << a[i+1] << endl;
    }

    return 0;
}
