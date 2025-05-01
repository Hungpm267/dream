#include <iostream>
#include <map>
using namespace std;

int main() {
    // 1️⃣ Khai báo và khởi tạo
    map<string, int> mp;
    mp["Alice"] = 20;
    mp["Bob"] = 25;
    mp["Charlie"] = 22;
    cout << "Alice's age: " << mp["Alice"] << endl;

    // 2️⃣ Duyệt map
    cout << "\nDuyet map:\n";
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }

    // 3️⃣ Tìm kiếm key
    cout << "\nTim kiem Alice:\n";
    if (mp.count("Alice")) {
        cout << "Alice exists in the map!\n";
    }

    auto it = mp.find("Alice");
    if (it != mp.end()) {
        cout << "Alice's age: " << it->second << endl;
    }

    // 4️⃣ Xóa phần tử
    cout << "\nXoa Bob:\n";
    mp.erase("Bob");
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }

    // 5️⃣ Kích thước và kiểm tra rỗng
    cout << "\nSize: " << mp.size() << endl;
    if (mp.empty()) {
        cout << "Map is empty!" << endl;
    } else {
        cout << "Map is not empty!" << endl;
    }

    return 0;
}
