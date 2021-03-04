#include <iostream>
using namespace std;

int main()
{
	double a, b, c, tien;
	cout << "Hay nhap gio bat dau truy cap internet: ";
	cin >> a;
	cout << "Hay nhap gio ket thuc truy cap internet: ";
	cin >> b;
	c = b - a;
	if (a >= 7 && b <= 17) {
		if (c > 6) {
			cout << "Cuoc truy cap internet cua ban la: " << (100 * 60 * c) * 0.9 << " d" << endl;
		}
		else {
			cout << "Cuoc truy cap internet cua ban la: " << (100 * 60 * c) << " d" << endl;
		}
	}
	else if (a >= 17 && b <= 24) {
		if (c > 4) {
			cout << "Cuoc truy cap internet cua ban la: " << (75 * 60 * c) * 0.88 << " d" << endl;
		}
		else {
			cout << "Cuoc truy cap internet cua ban la: " << (75 * 60 * c) << " d" << endl;
		}
	}
	else if (a >= 0 && b <= 7) {
		if (c > 2) {
			cout << "Cuoc truy cap internet cua ban la: " << (50 * 60 * c) * 0.85 << " d" << endl;
		}
		else {
			cout << "Cuoc truy cap internet cua ban la: " << (50 * 60 * c) << " d" << endl;
		}
	}
	else {
		cout << "Gio truy cap khong hop le" << endl;
	}
	return 0;
}