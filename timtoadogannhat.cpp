#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct point {
	float x, y;
};

float tinhkhoangcach(point p1, point p2) {
	return sqrt((p1.x-p2.x) * (p1.x-p2.x) + (p1.y-p2.y) * (p1.y-p2.y));
}

point timkiem(vector<point> v) {
    if(v.empty() == true){
        cout<<"mang rong roi!";
        return {0,0};
    }
	point p, l;
	p.x=5;
	p.y=5;
	float min = tinhkhoangcach(v[0], p);
	for (int i = 0; i < v.size(); i++) {
		float temp = tinhkhoangcach(v[i], p);
		if(temp <= min) {
			min = temp;
			l.x = v[i].x;
			l.y = v[i].y;
		}
	}
	return l;
}

void nhapmang(vector<point> &v) {

	int a, b;
	cin>>a>>b;

	while(a != 0 || b!= 0) {
		point p;

		p.x = a;
		p.y = b;
		v.push_back(p);
		cin>>a>>b;
	}
}

int main() {
	vector<point> x;
	cout<<"vui long nhap mang: ";
	nhapmang(x);

	point k = timkiem(x);
	cout<<"diem gian toa do 5 5 nhat la : " <<k.x<<" va "<< k.y;

}