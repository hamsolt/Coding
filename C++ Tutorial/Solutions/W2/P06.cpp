#include <iostream>
#include <string>
using namespace std;

int main()
{
	double t, l, h, average;
	string name;
	cout << "Nhap ho va ten: ";
	getline(cin, name);
	cout << "nhap diem toan" << endl;
	cin >> t;
	cout << "nhap diem ly " << endl;
	cin >> l;
	cout << "nhap diem hoa" << endl;
	cin >> h;
	average = (t + l + h) / 3;
	if (average >= 9) {
		cout << "xuat sac" << endl;
	}
	else if (average < 9 && average >= 8) {
		cout << "gioi" << endl;
	}
	else if (average < 8 && average >= 6.5) {
		cout << "kha";
	}
	else if (average >= 5 && average < 6.5) {
		cout << "trung binh";
	}
	else if (average < 5 && average >= 3) {
		cout << "yeu";
	}
	else cout << "kem";
	return 0;
}