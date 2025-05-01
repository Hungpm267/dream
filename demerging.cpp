/******************************************************************************

Da; bC i: cho 1 danh sach nhan vien da sap xep theo ngay thang nam sinh, hay sap xep lai sao cho
nu hien thi truoc nam, thu tu sap xep ngay thang nam sinh van giu nguyen

*******************************************************************************/
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Employee {
	string ten, gioitinh, namsinh;
	Employee(string ten, string gioitinh, string namsinh) {
		this->ten = ten;
		this->gioitinh = gioitinh;
		this->namsinh = namsinh;
	}
};

void demerging(vector<Employee> &em) {
	queue<Employee> nam;
	queue<Employee> nu;
	for (const auto &e : em) {
		if(e.gioitinh == "Female") {
			nu.push(e);
		}
		else {
			nam.push(e);
		}
	}

	vector<Employee> kq;
	while(!nu.empty()) {
		kq.push_back(nu.front());
		nu.pop();
	}
	while(!nam.empty()) {
		kq.push_back(nam.front());
		nam.pop();
	}
	em = kq;
}

int main() {
	vector<Employee> employees = {
		{"Eve", "Female", "1993-01-05"},
		{"Frank", "Male", "1993-03-17"},
		{"Alice", "Female", "1995-05-10"},
		{"Diana", "Female", "1996-07-14"},
		{"Bob", "Male", "1997-08-22"},
		{"Charlie", "Male", "1999-12-30"}
	};

	demerging(employees);
	cout<<"sau khi demerge la: \n";
	for (const Employee &e : employees) {
		cout<<e.ten<<" "<<e.gioitinh<<" "<<e.namsinh<<endl;
	}

	return 0;
}
